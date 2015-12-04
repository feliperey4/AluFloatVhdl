library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;
library Float;
use Float.Parametros.ALL;

entity OperacionSumRest is
    Port ( a : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
           b : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
			  op : in  STD_LOGIC; -- 0 Suma , 1 Resta
           c : out  STD_LOGIC_VECTOR (TAM_FLOAT downto 0));
end OperacionSumRest;

architecture Behavioral of OperacionSumRest is

	-- ====================================
	-- Numero A
	-- ====================================
	signal signoA : std_logic;
	signal expA : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
	signal mantisaA : std_logic_vector (TAM_MANTISA downto 0);

	-- ====================================
	-- Numero B
	-- ====================================
	signal signoB : std_logic;
	signal expB : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
	signal mantisaB : std_logic_vector (TAM_MANTISA downto 0);

	-- ====================================
	--Resultado C
	-- ====================================
	signal signoC : std_logic;
	signal expC : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
	signal mantisaC : std_logic_vector (TAM_MANTISA downto 0);

	signal opInterna : std_logic;

begin

	--============= DATOS Y Organiza colocando mayor en A ===========================
	Datos: process(a,b,op,signoA,signoB)
		-- Numero A
		variable sA : std_logic;
		variable eA : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
		variable mA : std_logic_vector (TAM_MANTISA downto 0);

		-- Numero B
		variable sB : std_logic;
		variable eB : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
		variable mB : std_logic_vector (TAM_MANTISA downto 0);
		
		variable opP : std_logic;
	begin
		eA:=a((TAM_FLOAT-1) downto (TAM_MANTISA+1));
		mA:=a(TAM_MANTISA downto 0);
		sA:=a(TAM_FLOAT);
		
		eB:=b((TAM_FLOAT-1) downto (TAM_MANTISA+1));
		mB:=b(TAM_MANTISA downto 0);
		sB:=b(TAM_FLOAT);
		
		if(eA>eB)then -- Si A es mayor B en los exponentes
			expA<=eA;
			signoA<=sA;
			mantisaA<=mA;
			
			expB<=eB;
			signoB<=sB;
			mantisaB<=mB;
			opP:=op;
		elsif(eA<eB) then -- Si A es menor B en los exponentes
			expA<=eB;
			signoA<= (op xor sB);
			mantisaA<=mB;
			
			signoB<=sA;
			expB<=eA;
			mantisaB<=mA;
			
			opP:='0';			
		else -- Cuando los exp son iguales
			if(mA < mb)then
				expA<=eB;
				mantisaA<=mB;
				signoA<= (op xor sB);
				
				signoB<=sA;
				expB<=eA;
				mantisaB<=mA;
				opP:='0';
			else 
				expA<=eA;
				signoA<=sA;
				mantisaA<=mA;

				expB<=eB;
				signoB<=sB;
				mantisaB<=mB;
				opP:=op;
			end if;		
		end if;
		
		-- Calcula signo de salida y la operacion a ejecutar.
		opInterna<= (not(signoA) and (opP xor signoB)) or (signoA and not(opP xor signoB)); 	
	end process Datos;
	
	--============ Realiza las operaciones de SUMA y RESTA ============================
	SumaResta:process(signoA,expA,mantisaA,signoB,expB,mantisaB,opInterna)
		variable expDif : unsigned((TAM_FLOAT-TAM_MANTISA-2) downto 0);
		variable mB : STD_LOGIC_VECTOR((TAM_MANTISA+1) downto 0);
		variable resultSuma : STD_LOGIC_VECTOR((TAM_MANTISA+2) downto 0);
		variable resultResta : STD_LOGIC_VECTOR((TAM_MANTISA*2+1) downto 0);
		variable rB : STD_LOGIC_VECTOR((TAM_MANTISA*2+1) downto 0);
		variable resultCero : STD_LOGIC_VECTOR((TAM_MANTISA+1) downto 0);
		variable resultExp : STD_LOGIC_VECTOR((expA'left+1) downto 0);
		variable shiftResta : STD_LOGIC_VECTOR((TAM_FLOAT-TAM_MANTISA-2) downto 0);
		variable auxSra: STD_LOGIC_VECTOR(((TAM_MANTISA+1)*2) downto 0):=(others => '1');
		variable aux : STD_LOGIC_VECTOR((TAM_MANTISA+1) downto 0):=(others => '1');
	begin
		signoC<=signoA;
		expDif:=unsigned(expA-expB);
		if(opInterna='0')then -------- SUMA
			mB := std_logic_vector(unsigned('1' & mantisaB) srl to_integer(expDif)); 
			resultSuma:=(others => '0');
			resultSuma:= resultSuma + ('1' & mantisaA) + mB;		
			if(resultSuma(resultSuma'left)='1')then
				resultExp:=(others => '0');
				resultExp(expA'left downto 0):=expA;
				resultExp:=resultExp+1;
				if(resultExp>X"FE")then
					expC<=(others => '1');
					expC(0)<='0';
					mantisaC<=(others => '1');
					signoC<='0';
				else
					expC<=expA+1;
					mantisaC<=resultSuma((resultSuma'left-1) downto 1);
				end if;
			else 
				expC<=expA;
				mantisaC<=resultSuma((resultSuma'left-2) downto 0);
			end if;
		else --------------------- RESTA
			mB := '1' & mantisaB;
			mB := (not mB)+1;
			auxSra:=(others => '1');
			auxSra(mB'left downto mB'right):=mB;
			mB:=auxSra((mB'left+to_integer(expDif)) downto (mB'right+to_integer(expDif)));
			
			resultResta:=(others => '0');
			resultCero:=(others => '0');
			rB:=(others => '0');
			rB(rB'left downto (rB'left-(mB'left+to_integer(expDif)))):= auxSra((mB'left+to_integer(expDif)) downto 0);
			resultResta((resultResta'left) downto (resultResta'left-(mantisaA'length))):=('1' & mantisaA);
			resultResta:= resultResta + rB; -- Realiza resta		
			if(resultResta=resultCero)then
				expC<=(others => '0');
				mantisaC<=(others => '0');
				signoC<='0';
			else
				shiftResta:=std_logic_vector(to_unsigned(buscarCeroIzq(resultResta),shiftResta'length));
				if(expA<shiftResta)then
					expC<=(others => '0');
					mantisaC<=(others => '0');
					signoC<='0';
				else
					resultResta:= to_stdlogicvector(to_bitvector(resultResta) sla to_integer(unsigned(shiftResta))); -- Realiza corrimiento izquierda.
					expC<=expA - shiftResta; -- Calcula exponente.
					mantisaC<=resultResta((resultResta'left-1) downto (resultResta'left-(mantisaA'length))); -- Calcula manitisa.
				end if;
			end if;
		end if;
	end process;
	
	c<=signoC & expC & mantisaC;
end Behavioral;
