library IEEE;
use IEEE.STD_LOGIC_1164.all;
use std.textio.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE ieee.numeric_std.ALL;

package leer is
	procedure leerFloat(linea: inout LINE; sal : out std_logic_vector);
	function str(int: unsigned) return string;
	function chr(int: integer) return character;
	function str(int: std_logic_vector) return string;
	function hstr(slv: std_logic_vector) return string;
end leer;

package body leer is

	function hstr(slv: std_logic_vector) return string is
       variable hexlen: integer;
       variable longslv : std_logic_vector(67 downto 0) := (others => '0');
       variable hex : string(1 to 16);
       variable fourbit : std_logic_vector(3 downto 0);
     begin
       hexlen := (slv'left+1)/4;
       if (slv'left+1) mod 4 /= 0 then
         hexlen := hexlen + 1;
       end if;
       longslv(slv'left downto 0) := slv;
       for i in (hexlen -1) downto 0 loop
         fourbit := longslv(((i*4)+3) downto (i*4));
         case fourbit is
           when "0000" => hex(hexlen -I) := '0';
           when "0001" => hex(hexlen -I) := '1';
           when "0010" => hex(hexlen -I) := '2';
           when "0011" => hex(hexlen -I) := '3';
           when "0100" => hex(hexlen -I) := '4';
           when "0101" => hex(hexlen -I) := '5';
           when "0110" => hex(hexlen -I) := '6';
           when "0111" => hex(hexlen -I) := '7';
           when "1000" => hex(hexlen -I) := '8';
           when "1001" => hex(hexlen -I) := '9';
           when "1010" => hex(hexlen -I) := 'A';
           when "1011" => hex(hexlen -I) := 'B';
           when "1100" => hex(hexlen -I) := 'C';
           when "1101" => hex(hexlen -I) := 'D';
           when "1110" => hex(hexlen -I) := 'E';
           when "1111" => hex(hexlen -I) := 'F';
           when "ZZZZ" => hex(hexlen -I) := 'z';
           when "UUUU" => hex(hexlen -I) := 'u';
           when "XXXX" => hex(hexlen -I) := 'x';
           when others => hex(hexlen -I) := '?';
         end case;
       end loop;
       return hex(1 to hexlen);
     end hstr;

	function str(int: std_logic_vector) return string is
		begin
		return str(unsigned(int));
	end str;
	
	function str(int: unsigned) return string is

    variable temp:      string(1 to 10);
    variable num:       unsigned(int'left downto 0);
    variable len:       integer := 1;
    variable power:     integer := 1;
	 variable base: integer:=10;

   begin

    num     := int;
    while num >= base loop  
      len := len + 1;                          
      num := num / base;                       
    end loop ;                                 
    for i in len downto 1 loop                
      temp(i) := chr(to_integer(int/power) mod base);  
      power := power * base;                  
    end loop ;                                
	 return temp;
	end str;

	function chr(int: integer) return character is
    variable c: character;
   begin
        case int is
          when  0 => c := '0';
          when  1 => c := '1';
          when  2 => c := '2';
          when  3 => c := '3';
          when  4 => c := '4';
          when  5 => c := '5';
          when  6 => c := '6';
          when  7 => c := '7';
          when  8 => c := '8';
          when  9 => c := '9';
          when 10 => c := 'A';
          when 11 => c := 'B';
          when 12 => c := 'C';
          when 13 => c := 'D';
          when 14 => c := 'E';
          when 15 => c := 'F';
          when 16 => c := 'G';
          when 17 => c := 'H';
          when 18 => c := 'I';
          when 19 => c := 'J';
          when 20 => c := 'K';
          when 21 => c := 'L';
          when 22 => c := 'M';
          when 23 => c := 'N';
          when 24 => c := 'O';
          when 25 => c := 'P';
          when 26 => c := 'Q';
          when 27 => c := 'R';
          when 28 => c := 'S';
          when 29 => c := 'T';
          when 30 => c := 'U';
          when 31 => c := 'V';
          when 32 => c := 'W';
          when 33 => c := 'X';
          when 34 => c := 'Y';
          when 35 => c := 'Z';
          when others => c := '?';
        end case;
        return c;
    end chr;
	
	
	procedure leerFloat(linea: inout LINE; sal : out std_logic_vector) is
		variable resultInt : std_logic_vector(sal'left downto 0);
		variable chr_val : integer;
		variable charX : character;
		variable flag:boolean:=true;
		variable cont : std_logic_vector((sal'left+4) downto 0);
		variable aux : std_logic_vector(3 downto 0);
  begin 
		resultInt := (others => '0');
		flag:=true;
		while flag loop
			read (linea, charX);  -- Lee cada caracter
			case charX is
			  when '0'       =>   chr_val := 0;
			  when '1'       =>   chr_val := 1;
			  when '2'       =>   chr_val := 2;
			  when '3'       =>   chr_val := 3;
			  when '4'       =>   chr_val := 4;
			  when '5'       =>   chr_val := 5;
			  when '6'       =>   chr_val := 6;
			  when '7'       =>   chr_val := 7;
			  when '8'       =>   chr_val := 8;
			  when '9'       =>   chr_val := 9;          
			  when others => 
					flag:=false;
			end case;
			if(flag)then
				cont:=(resultInt * X"A");
				aux:=std_logic_vector(to_unsigned(chr_val,aux'length));
				resultInt := cont(sal'left downto 0) + aux;
			end if;
		 end loop;
    sal:=resultInt;
  end procedure;

end leer;
