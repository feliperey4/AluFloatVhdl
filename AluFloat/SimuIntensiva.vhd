library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;
use std.textio.all;
library Float;
use Float.Parametros.ALL;
library Archivos;
USE Archivos.leer.all;

entity TestIntensivo is
end TestIntensivo;

architecture TestIntensivo_arq of TestIntensivo is

	component AluFloat is
		 port ( a    : in    std_logic_vector (TAM_FLOAT downto 0); 
				 b    : in    std_logic_vector (TAM_FLOAT downto 0); 
				 sel    : in    std_logic_vector (1 downto 0); 
				 c    : out   std_logic_vector (TAM_FLOAT downto 0));
	end component;
	
	
	--============================================
	-- Nombre del archivo que se carga:
	-- Suma: "test_sum_float_32_8.txt"
	-- Resta: "test_dif_float_32_8.txt"
	-- Multiplicacion: "test_mul_float_32_8.txt"
	--============================================
	file datosArchivo  : text open read_mode is "..\test_intensivo\test_mul_float_32_8.txt";
	--file logArchivo: TEXT open write_mode is "..\test_intensivo\logSuma.txt";
	
	-- ==================================
	-- Operaciones:
		-- Suma: 00
		-- Resta: 01
		-- Multiplicacion: 10
	-- ==================================
	signal op_t : STD_LOGIC_VECTOR (1 downto 0):="10";
	
	-- ==================================
	-- Señales
	-- ==================================
	signal clk_t : STD_LOGIC:='0';
	signal a_t : STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
	signal b_t : STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
	signal c_alu : STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
	signal c_test : STD_LOGIC_VECTOR (TAM_FLOAT downto 0);
	
	signal error: STD_LOGIC:='0';
	signal inicioLog: STD_LOGIC:='0';
	signal contError : integer:=0;
	signal difError: integer:=0;
	
begin
	clk_t <= not clk_t after 2 ns;
	
	Alu: AluFloat port map(
		 a => a_t,
		 b => b_t,
		 sel => op_t,
		 c => c_alu
	 );
	 
	--=================================================================
	--Lee el archivo con el contenido
	--=================================================================
	leerDatos:process
		 variable linea : line;
		 variable d1 : std_logic_vector(31 downto 0);
		 variable d2 : std_logic_vector(31 downto 0);
		 variable d3 : std_logic_vector(31 downto 0);
	begin
		 while not endfile(datosArchivo) loop                            
			wait until (clk_t'event and clk_t = '1');      
			readline (datosArchivo, linea);            
			leerFloat(linea,d1);
			leerFloat(linea,d2);
			leerFloat(linea,d3);
			a_t<=d1;
			b_t<=d2;
			c_test<=d3;
		 end loop;
	end process;
	
	--=================================================================
	-- Verifica que el resultado sea correcto, si no coloca error en 1.
	--=================================================================
	verificarResultado: process(clk_t,c_alu,c_test)
	variable linea: line;

	begin
		if (clk_t'event and clk_t = '0') then
			if(c_alu/=c_test)then
				error<='1';
				contError<=contError+1;
				difError<=to_integer(unsigned(c_alu - c_test));
				
--				if(inicioLog='0')then
--					-- Escribe encabezado de archivo de log.
--					write(linea, "Valor_A Valor_B Resultado_Original Resultado_obtenido");
--					writeline(logArchivo, linea);
--					inicioLog<='1';
--				end if;
--				
--				write(linea, hstr(a_t)&" "&hstr(b_t)&" "&hstr(c_test)&" "&hstr(c_alu));
--				writeline(logArchivo, linea);
			end if;
		end if;
	end process;
	
end TestIntensivo_arq;