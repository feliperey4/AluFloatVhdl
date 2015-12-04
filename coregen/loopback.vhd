library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;
library Float;
use Float.Parametros.ALL;


entity picoBlazeAluFloat is
    Port ( clk : in std_logic;
           rst : in std_logic;
			  interrupcion_S : out std_logic;
			  a_S : out std_logic_vector (TAM_FLOAT downto 0); 
			  b_S : out std_logic_vector (TAM_FLOAT downto 0); 
			  sel_S : out std_logic_vector (1 downto 0); 
			  c_S : out std_logic_vector (TAM_FLOAT downto 0));
end picoBlazeAluFloat;

architecture Behavioral of picoBlazeAluFloat is

	-- ====================================
	-- Memoria de programa
	-- ====================================
	COMPONENT program
		  Port (      address : in std_logic_vector(9 downto 0);
            instruction : out std_logic_vector(17 downto 0);
                    clk : in std_logic);
		END COMPONENT;

		signal address      : std_logic_vector (9 downto 0);

	-- ====================================
	-- PicoBlazes
	-- ====================================
	COMPONENT kcpsm3
		PORT(
			instruction   : IN std_logic_vector(17 downto 0);
			in_port       : IN std_logic_vector(7 downto 0);
			interrupt     : IN std_logic;
			reset         : IN std_logic;
			clk           : IN std_logic;          
			address       : OUT std_logic_vector(9 downto 0);
			port_id       : OUT std_logic_vector(7 downto 0);
			write_strobe  : OUT std_logic;
			out_port      : OUT std_logic_vector(7 downto 0);
			read_strobe   : OUT std_logic;
			interrupt_ack : OUT std_logic
			);
		END COMPONENT;

		-- ====================================
		-- PicoBlaze Signals
		-- ====================================
		signal instruction  : std_logic_vector (17 downto 0);
		signal port_id      : std_logic_vector (7 downto 0);
		signal write_strobe : std_logic;
		signal in_port      : std_logic_vector (7 downto 0);
		signal out_port     : std_logic_vector (7 downto 0);
		signal read_strobe  : std_logic;
		signal interrupt     : std_logic :='0';
		signal interrupt_ack : std_logic;


		-- ====================================
		-- Alu Float
		-- ====================================
		COMPONENT AluFloat 
			port ( a    : in    std_logic_vector (TAM_FLOAT downto 0); 
					 b    : in    std_logic_vector (TAM_FLOAT downto 0); 
					 sel    : in    std_logic_vector (1 downto 0); 
					 c    : out   std_logic_vector (TAM_FLOAT downto 0));
		END COMPONENT;

		-- ====================================
		-- Señales de la ALU	
		-- ====================================
		signal a : std_logic_vector (TAM_FLOAT downto 0):=(others => '0'); 
		signal b : std_logic_vector (TAM_FLOAT downto 0):=(others => '0');  
		signal a_t : std_logic_vector (TAM_FLOAT downto 0); 
		signal b_t : std_logic_vector (TAM_FLOAT downto 0); 
		signal op : std_logic_vector (1 downto 0):=(others => '0');  
		signal c : std_logic_vector (TAM_FLOAT downto 0):=(others => '0'); 
		signal interrupt_AluFloat : std_logic :='0';

	   signal rst_p : std_logic;
	   signal clk_p : std_logic;		
begin
	
	-- ====================================
	-- Memoria de programa
	-- ====================================
	my_program : program
	  PORT MAP (
		 clk => clk,
		 address => address,
		 instruction => instruction
	  );

	rst_p <= rst;
	clk_p <= clk;
	a_S <= a;
	b_S <= b;
	sel_S<=op;
	c_S <= c;
	interrupcion_S<=interrupt;
	
	-- ====================================
	-- Pico Blaze
	-- ====================================
	my_kcpsm3: kcpsm3 
	   PORT MAP
		(
			address       => address,
			instruction   => instruction,
			port_id       => port_id,
			write_strobe  => write_strobe,
			out_port      => out_port,
			read_strobe   => read_strobe,
			in_port       => in_port,
			interrupt     => interrupt,
			interrupt_ack => interrupt_ack,
			reset         => rst_p,
			clk           => clk_p
		);
		
	-- ====================================
	-- Implementa output de AluFloat:
		-- A inicia en 00 hasta 0F
		-- B inicia en 10 hasta 1F
		-- C inicia en 20 hasta 2F
		-- Operador es 30
	-- ====================================
	Inst_AluFloat : AluFloat PORT MAP ( 
			a =>a, 
			b =>b, 
			sel => op,
			c =>c
	);
	
	-- ====================================
	--- Entradas de la Alu.
	-- ====================================
	AluFloatOut : process (clk_p,rst_p,write_strobe,port_id)
		variable cont:integer:=0;
	begin
		if (clk_p'event and clk_p='1') then
			interrupt_AluFloat<='0';
			if rst_p = '1'	then
				a <= (others => '0');
				b <= (others => '0');
				op <=(others => '0');
			elsif(write_strobe = '1' and (port_id<=X"1F" or port_id=X"30")) then
				if(port_id<=X"0F")then -- Operando A
					cont:=to_integer(unsigned(port_id));
					if(((cont*8)+7)<=a'left)then
						a_t(((cont*8)+7) downto (cont*8))<=out_port;
					end if;
				elsif(port_id<=X"1F" and port_id>X"0F")then-- Operando B
					cont:=to_integer(unsigned(port_id and "00001111"));
					if(((cont*8)+7)<=b'left)then
						b_t(((cont*8)+7) downto (cont*8))<=out_port;
					end if;
				elsif(port_id=X"30")then -- Operacion
					a<=a_t;
					b<=b_t;
					op<=out_port(1 downto 0);
					interrupt_AluFloat<='1'; -- Activa Interrupcion
				end if;
         end if;
      end if;
	end process;

	-- ====================================
	-- Salida de la Alu.
	-- ====================================
	AluFloatIn : process (clk_p,rst_p,read_strobe,port_id)
		variable cont : integer:=0;
	begin  
   	if (clk_p'event and clk_p = '1') then
			if rst_p = '1' then
      		in_port <= (others => '0');
			elsif(read_strobe = '1' and port_id<=X"2F" and port_id>X"1F") then
      		cont:=to_integer(unsigned(port_id and "00001111"));
				if(((cont*8)+7)<=c'left)then
					in_port <= c(((cont*8)+7) downto (cont*8));
				end if;
      	end if;
			
		end if;
	end process;
	
	-- ====================================
	-- Interrupcion Control
	-- ====================================
	interrupt_control: process(clk_p,interrupt_ack,interrupt_AluFloat)
	begin
	 if clk_p'event and clk_p='1' then
		if interrupt_ack='1' then
		  interrupt <= '0';
		elsif interrupt_AluFloat='1' then
		  interrupt <= '1';
		else
		  interrupt <= interrupt;
		end if;
	 end if; 
	end process interrupt_control;
	
end Behavioral;


