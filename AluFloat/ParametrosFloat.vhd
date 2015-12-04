library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;

package Parametros is

-- Float de 32 BIT
	constant TAM_FLOAT : integer := 31;
	constant TAM_MANTISA : integer := 22;
	--constant TAM_EXP : integer := 7;

---- Float de 64 BIT
--	constant TAM_FLOAT : integer := 63;
--	constant TAM_MANTISA : integer := 51;
--	--constant TAM_EXP : integer := 10;	
--	
---- Float de 128 BIT
--	constant TAM_FLOAT : integer := 127;
--	constant TAM_MANTISA : integer := 111;
--	--constant TAM_EXP : integer := 14;

	function buscarCeroIzq (vector :std_logic_vector) return integer;

end Parametros;

package body Parametros is

	function buscarCeroIzq (vector :std_logic_vector) return integer is
		variable cont : integer:=0;
	begin
		cont := 0;
		if vector(vector'left) = '1' then 
			return 0;
		end if;
		for i in vector'left downto 0 loop
			if vector(i) = '1' then 
				exit;
			else 
				cont:=cont+1;
			end if;
		end loop;
		return cont;
	end function;
 
end Parametros;
