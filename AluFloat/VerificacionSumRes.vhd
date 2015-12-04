library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;
library Float;
use Float.Parametros.ALL;

entity VerificacionSumRes is
    Port ( a : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
           b : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
           c : out  STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
           op : in  STD_LOGIC;
           cP : in  STD_LOGIC_VECTOR (TAM_FLOAT downto 0));
end VerificacionSumRes;

architecture Behavioral of VerificacionSumRes is
	-- Numero A
	signal signoA : std_logic;
	signal expA : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
	signal mantisaA : std_logic_vector (TAM_MANTISA downto 0);

	-- Numero B
	signal signoB : std_logic;
	signal expB : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
	signal mantisaB : std_logic_vector (TAM_MANTISA downto 0);
	
	-- Señales de verificacion
	signal selA : std_logic_vector (3 downto 0);
	signal selB : std_logic_vector (3 downto 0);
	signal tipo : std_logic_vector (3 downto 0);
	
begin

	--============ DATOS =============
	Datos:process(a,b)
	begin
		expA<=a((TAM_FLOAT-1) downto (TAM_MANTISA+1));
		mantisaA<=a(TAM_MANTISA downto 0);
		signoA<=a(TAM_FLOAT);
		
		expB<=b((TAM_FLOAT-1) downto (TAM_MANTISA+1));
		mantisaB<=b(TAM_MANTISA downto 0);
		signoB<=b(TAM_FLOAT);
	end process;
	
	--=============== VERIFICACION 'A' =========================
	VerificacionA: process(expA,mantisaA,signoA)
		variable expFF : std_logic_vector ((a'left-TAM_MANTISA-2) downto 0):=(others => '1');
		variable matisaFF : std_logic_vector (TAM_MANTISA downto 0):=(others => '1');
	begin
		if(expA=X"0" and mantisaA/=X"0") then
			selA<=X"0"; -- Cero
		elsif(expA=expFF and mantisaA=matisaFF) then
			selA<=X"1"; -- NaN
		elsif(expA=expFF and mantisaA/=matisaFF) then
			if(signoA='0')then
				selA<=X"2"; -- (+)Infinito
			else
				selA<=X"3"; -- (-)Infinito
			end if;
		else
			selA<=X"4"; -- Correcto
		end if;
	end process;

	--=============== VERIFICACION 'B' =========================
	VerificacionB: process(expB,mantisaB,signoB)
		variable expFF : std_logic_vector ((a'left-TAM_MANTISA-2) downto 0):=(others => '1');
		variable matisaFF : std_logic_vector (TAM_MANTISA downto 0):=(others => '1');
	begin
		if(expB=X"0" and mantisaB/=X"0") then
			selB<=X"0"; -- Cero
		elsif(expA=expFF and mantisaB=matisaFF) then
			selB<=X"1"; -- NaN
		elsif(expB=expFF and mantisaB/=matisaFF) then
			if(signoB='0')then
				selB<=X"2"; -- (+)Infinito
			else
				selB<=X"3"; -- (-)Infinito
			end if;
		else
			selB<=X"4"; -- Correcto
		end if;
	end process;
	
	--============= VERIFICACION DE LA OPERACION ===========================
	VerificacionMul:process(selA,selB,op)
	begin
		if(selA=X"1" or selB=X"1") then -- Verifica NaN
			tipo<=X"0";  -- 1 11111111 10000000000000000000000
		elsif((selA=X"2" and selB=X"2" and op='1') or (selA=X"3" and selB=X"2" and op='0') or (selA=X"2" and selB=X"3" and op='0')) then -- Verifica operacion Infinito - Infinito
			tipo<=X"1";  -- 0 11111111 10000000000000000000000 QNAN
		elsif((selA=X"2" and selB=X"4") or (selB=X"2" and selA=X"4")) then 	-- Verifica (+)Infinito + #
			tipo<=X"2";  -- signo + Infinito
		elsif((selA=X"3" and selB=X"4") or (selB=X"3" and selA=X"4")) then 	-- Verifica (-)Infinito + #
			tipo<=X"3";  -- signo - Infinito
		elsif(selA=X"0" or selA=X"0") then 	-- Verifica 0 + #
			tipo<=X"4";  -- signo + 00000000 00000000000000000000000
		else
			tipo<=X"5";
		end if;
	end process;
	
	--=========== SELECCION DE TIPOS ===============
	Seleccion : process(tipo,cP,a,b)
		variable signoC : std_logic;
		variable expC : std_logic_vector ((TAM_FLOAT-TAM_MANTISA-2) downto 0);
		variable mantisaC : std_logic_vector (TAM_MANTISA downto 0);
	begin
		if(tipo=X"0")then --NAN
			signoC:='0';
			expC:=(others => '1');
			mantisaC:=(others => '1');
			c<=signoC & expC & mantisaC;
		elsif(tipo=X"1")then --QNAN
			signoC:='1';
			expC:=(others => '1');
			mantisaC:=(others => '1');
			c<=signoC & expC & mantisaC;
		elsif(tipo=X"2")then -- (+) Infinito
			signoC:='0';
			expC:=(others => '1');
			mantisaC:=(others => '0');
			c<=signoC & expC & mantisaC;
		elsif(tipo=X"3")then -- (-) Infinito
			signoC:='1';
			expC:=(others => '1');
			mantisaC:=(others => '0');
			c<=signoC & expC & mantisaC;
		elsif(tipo=X"4")then
			c<= a or b;
		else
			c<=cP;
		end if;
	
	end process;

end Behavioral;

