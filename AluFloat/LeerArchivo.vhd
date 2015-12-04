
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;
use std.textio.all;

library Archivos;
USE Archivos.leer.all;

--use work.txt_util.all;


entity LeerArchivo is
	port(
		  clk  : in  std_logic;
		  a   : out std_logic_vector(31 downto 0);
		  b   : out std_logic_vector(31 downto 0);
		  c   : out std_logic_vector(31 downto 0)
		 );
end LeerArchivo;

architecture Behavioral of LeerArchivo is
	FILE datainfile  : text OPEN read_mode IS "C:\FPGA\test_intensivo\test_mul_float_32_8.txt";
begin
	leerDatos:process
		 variable linea : line;
		 variable d1 : std_logic_vector(31 downto 0);
		 variable d2 : std_logic_vector(31 downto 0);
		 variable d3 : std_logic_vector(31 downto 0);
	begin
		 while not endfile(datainfile) loop                            
			wait until (clk'event and clk = '1');      
			readline (datainfile, linea);            
			leerFloat(linea,d1);
			leerFloat(linea,d2);
			leerFloat(linea,d3);
			a<=d1;
			b<=d2;
			c<=d3;
		 end loop;
  end process;

end Behavioral;

