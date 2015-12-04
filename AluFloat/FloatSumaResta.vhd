library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;
library Float;
use Float.Parametros.ALL;

entity FloatSumaResta is
   port ( a  : in    std_logic_vector (TAM_FLOAT downto 0); 
          b  : in    std_logic_vector (TAM_FLOAT downto 0); 
          op : in    std_logic; 
          c  : out   std_logic_vector (TAM_FLOAT downto 0));
end FloatSumaResta;

architecture BEHAVIORAL of FloatSumaResta is
   signal cP_n : std_logic_vector (TAM_FLOAT downto 0);
	
   component VerificacionSumRes
      port ( op : in    std_logic; 
             a  : in    std_logic_vector (TAM_FLOAT downto 0); 
             b  : in    std_logic_vector (TAM_FLOAT downto 0); 
             cP : in    std_logic_vector (TAM_FLOAT downto 0); 
             c  : out   std_logic_vector (TAM_FLOAT downto 0));
   end component;
   
   component OperacionSumRest
      port ( op : in    std_logic; 
             a  : in    std_logic_vector (TAM_FLOAT downto 0); 
             b  : in    std_logic_vector (TAM_FLOAT downto 0); 
             c  : out   std_logic_vector (TAM_FLOAT downto 0));
   end component;
   
begin
   Verificacion : VerificacionSumRes
      port map (a=>a,
                b=>b,
                cP=>cP_n,
                op=>op,
                c=>c);
   
   Operacion : OperacionSumRest
      port map (a=>a,
                b=>b,
                op=>op,
                c=>cP_n);
   
end BEHAVIORAL;