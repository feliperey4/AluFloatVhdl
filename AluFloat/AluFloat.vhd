library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library Float;
use Float.Parametros.ALL;

-- ====================================
-- Valores de entrada A y B
-- Selector de operacion 'sel', donde: 
-- sel="00" => Suma
-- sel="01" => Resta
-- sel="10" => Multiplicacion
-- El resultado de la operacion es C.
-- ====================================

entity AluFloat is
   port ( a    : in    std_logic_vector (TAM_FLOAT downto 0); 
          b    : in    std_logic_vector (TAM_FLOAT downto 0); 
          sel    : in    std_logic_vector (1 downto 0); 
          c    : out   std_logic_vector (TAM_FLOAT downto 0):=(others => '0'));
end AluFloat;

architecture BEHAVIORAL of AluFloat is
   signal resultSumaResta : std_logic_vector (TAM_FLOAT downto 0);
   signal resultMult : std_logic_vector (TAM_FLOAT downto 0);
	signal a_S    : std_logic_vector (TAM_FLOAT downto 0):=(others => '0');
	signal b_S    : std_logic_vector (TAM_FLOAT downto 0):=(others => '0');
	signal a_M    : std_logic_vector (TAM_FLOAT downto 0):=(others => '0');
	signal b_M    : std_logic_vector (TAM_FLOAT downto 0):=(others => '0');	
	
   component FloatMultiplicacion
      port ( a : in    std_logic_vector (TAM_FLOAT downto 0); 
             b : in    std_logic_vector (TAM_FLOAT downto 0); 
             c : out   std_logic_vector (TAM_FLOAT downto 0));
   end component;
   
   component FloatSumaResta
      port ( op : in    std_logic; 
             a  : in    std_logic_vector (TAM_FLOAT downto 0); 
             b  : in    std_logic_vector (TAM_FLOAT downto 0); 
             c  : out   std_logic_vector (TAM_FLOAT downto 0));
   end component;

   
begin
   Multiplicacion : FloatMultiplicacion
      port map (a=>a_M,
                b=>b_M,
                c=>resultMult);
   
   SumaResta : FloatSumaResta
      port map (a=>a_S,
                b=>b_S,
                op=>sel(0),
                c=>resultSumaResta);
	
	-- ====================================
	-- Mux para escoger la operacion
	-- ====================================
	a_M <= a when sel="10" else (others =>'0');
	b_M <= b when sel="10" else (others =>'0');
	
	a_S <= a when (sel="00" or sel="01") else (others =>'0');
	b_S <= b when (sel="00" or sel="01") else (others =>'0');
	
	c<= resultSumaResta when (sel="00" or sel="01") else
			resultMult when sel="10" else (others =>'0');
	
end BEHAVIORAL;
