
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity HA is
    Port ( a_ha: in STD_LOGIC;
           b_ha: in STD_LOGIC;
           s_ha: out STD_LOGIC;
           c_ha: out STD_LOGIC
          );
end HA;

architecture Dataflow of HA is
begin
    s_ha<= a_ha xor b_ha;
    c_ha<= a_ha and b_ha;
end Dataflow;