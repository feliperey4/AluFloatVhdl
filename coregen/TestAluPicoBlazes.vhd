library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library Float;
use Float.Parametros.ALL;

entity TestAluPicoBlazes is
end TestAluPicoBlazes;

architecture Behavioral of TestAluPicoBlazes is

	component picoBlazeAluFloat is
		Port ( clk : in std_logic;
           rst : in std_logic;
			  interrupcion_S : out std_logic;
			  a_S : out std_logic_vector (TAM_FLOAT downto 0); 
			  b_S : out std_logic_vector (TAM_FLOAT downto 0); 
			  sel_S : out std_logic_vector (1 downto 0); 
			  c_S : out std_logic_vector (TAM_FLOAT downto 0));
	end component;
	
	--===============
	--   Señales
	--===============
	signal clk_t : std_logic:='1';
	signal rst_t : std_logic:='1';
	signal interrupcion : std_logic:='0';
	signal operador_A : std_logic_vector (TAM_FLOAT downto 0); 
	signal operador_B : std_logic_vector (TAM_FLOAT downto 0); 
	signal result_AluFloat : std_logic_vector (TAM_FLOAT downto 0); 
	signal operacion : std_logic_vector (1 downto 0); 
begin

	clk_t <= not clk_t after 5 ns;
	rst_t <= '0' after 20 ns;

	PICOBLAZES: picoBlazeAluFloat
		PORT MAP (
		 clk => clk_t,
		 a_S => operador_A,
		 b_S => operador_B,
		 c_S =>result_AluFloat,
		 sel_S => operacion,
		 interrupcion_S => interrupcion,
		 rst => rst_t
	  );

end Behavioral;

