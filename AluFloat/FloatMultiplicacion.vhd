library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;
library Float;
use Float.Parametros.ALL;

entity FloatMultiplicacion is
    Port ( a : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
           b : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
           c : out  STD_LOGIC_VECTOR (TAM_FLOAT downto 0));
end FloatMultiplicacion;

architecture Behavioral of FloatMultiplicacion is

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

-- ====================================
-- Señales de verificacion
-- ====================================
signal selA : std_logic_vector (3 downto 0);
signal selB : std_logic_vector (3 downto 0);
signal tipo : std_logic_vector (3 downto 0);
--signal correr : integer:=0;

begin
--================ DATOS ========================
	Datos: process(a,b)
	begin
		expA<=a((TAM_FLOAT-1) downto (TAM_MANTISA+1));
		mantisaA<=a(TAM_MANTISA downto 0);
		signoA<=a(TAM_FLOAT);
		
		expB<=b((TAM_FLOAT-1) downto (TAM_MANTISA+1));
		mantisaB<=b(TAM_MANTISA downto 0);
		signoB<=b(TAM_FLOAT);
	end process Datos;
		
	--=============== VERIFICACION 'A' =========================

	VerificacionA: process(expA,mantisaA)
		variable expFF : std_logic_vector ((a'left-TAM_MANTISA-2) downto 0):=(others => '1');
		variable matisaFF : std_logic_vector (TAM_MANTISA downto 0):=(others => '1');
	begin
		if(expA=X"0" and mantisaA/=X"0") then
			selA<=X"0"; -- Cero
		elsif(expA=expFF and mantisaA=matisaFF) then
			selA<=X"1"; -- NaN
		elsif(expA=expFF and mantisaA/=matisaFF) then
			selA<=X"2"; -- Infinito
		else
			selA<=X"3"; -- Correcto
		end if;
	end process;

	--=============== VERIFICACION 'B' =========================
	
	VerificacionB: process(expB,mantisaB)
		variable expFF : std_logic_vector ((a'left-TAM_MANTISA-2) downto 0):=(others => '1');
		variable matisaFF : std_logic_vector (TAM_MANTISA downto 0):=(others => '1');
	begin
		if(expB=X"0" and mantisaB/=X"0") then
			selB<=X"0"; -- Cero
		elsif(expA=expFF and mantisaB=matisaFF) then
			selB<=X"1"; -- NaN
		elsif(expB=expFF and mantisaB/=matisaFF) then
			selB<=X"2"; -- Infinito
		else
			selB<=X"3"; -- Correcto
		end if;
	end process;
	
	--============= VERIFICACION DE LA OPERACION ===========================
	
	VerificacionMul:process(selA,selB)
	begin
		if(selA=X"1" or selB=X"1") then -- Verifica NaN
			tipo<=X"0";  -- 1 11111111 10000000000000000000000
		elsif((selA=X"0" and selB=X"2") or (selB=X"0" and selA=X"2")) then -- Verifica operacion de 0 * Infinito
			tipo<=X"1";  -- 0 11111111 10000000000000000000000
		elsif(selA=X"2" or selA=X"2") then 	-- Verifica Infinito * #
			tipo<=X"2";  -- signo + 11111111 00000000000000000000000
		elsif(selA=X"0" or selA=X"0") then 	-- Verifica 0 * #
			tipo<=X"3";  -- signo + 00000000 00000000000000000000000
		else
			tipo<=X"4";
		end if;
	end process;

	-- ====================================
	-- Calcula Multiplicacion
	-- ====================================
	MultExp:process(tipo,expA,expB,expC,mantisaA,mantisaB,mantisaC,signoA,signoB)
		variable aux:std_logic_vector((TAM_FLOAT-TAM_MANTISA-1) downto 0);
		variable expMax : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0):=(others => '1');
		variable expMin : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0):=(others => '0');
		variable resta : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0):=(others => '1');
		
		variable manA:std_logic_vector((TAM_MANTISA+1) downto 0);
		variable manB:std_logic_vector((TAM_MANTISA+1) downto 0);
		variable resultMul:std_logic_vector((2*(TAM_MANTISA+1)) downto 0);
		variable resultMulAux:std_logic_vector((2*(TAM_MANTISA+1)) downto 0);
		variable correr: integer:=0;
	begin
		if(tipo=X"0" or tipo=X"1" or tipo=X"2")then
			expC<=(others => '1');
			if(tipo=X"0")then
				signoC<='1';
			elsif(tipo=X"1")then
				signoC<='0';
			end if;
		elsif(tipo=X"3")then
			expC<=(others => '0');
			signoC<= signoA xor signoB;
		else
			-- ====================================
			-- Calcula signo
			-- ====================================
			signoC<= signoA xor signoB;
			
			-- ====================================
			-- Calcula Mantisa
			-- ====================================
			manA:='1' & mantisaA;
			manB:='1' & mantisaB;
			resultMul:=manA*manB;
			correr:=0;
			for i in resultMul'left downto 0 loop
				if resultMul(i) = '1' then 
					exit;
				else 
					correr:=correr+1;
				end if;
			end loop;
			resultMulAux:=std_logic_vector(unsigned(resultMul) sll correr);
			
			-- ====================================
			-- Calcula Exponente
			-- ====================================
			resta(resta'left):='0';
			aux:=(('0' & expA)+('0' & expB));
			if(aux<resta)then
				aux:=(others => '0');
			else
				aux:=aux-resta;
				if(correr=0)then
					aux:=aux+1;
				end if;
			end if;
		
			if(aux>=expMax)then -- Coloca valor de infinito cuando se supera el maximo valor.
				expC<=(others => '1');
				expC(0)<='0';
				mantisaC<=(others => '1');
			elsif(aux=expMin)then
				expC<=(others => '0');
				mantisaC<=(others => '0');
				signoC<='0';
			else
				expC<=aux((aux'left-1) downto 0);
				mantisaC<=resultMulAux((resultMul'left-1) downto manA'left);
			end if;
		end if;
	end process;

		
	--============ CONSTRUYE LA SALIDA ============================
	c<=signoC & expC & mantisaC;
	
end Behavioral;
