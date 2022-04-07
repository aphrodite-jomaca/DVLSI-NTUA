library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FA_seq_str is
    Port ( A     : in STD_LOGIC;
           B     : in STD_LOGIC; 
           C_in  : in STD_LOGIC;
           Clk   : in STD_LOGIC;
           reset : in STD_LOGIC;
           C_out  : out STD_LOGIC;
           SUM    : out STD_LOGIC );
end FA_seq_str;

architecture Structural of FA_seq_str is

signal HA1_S: STD_LOGIC;
signal HA1_C: STD_LOGIC;
signal HA2_C: STD_LOGIC;
signal temp_sum: std_logic;



component HA is
    port(
        a_ha: in STD_LOGIC;
        b_ha: in STD_LOGIC;
        s_ha: out STD_LOGIC;
        c_ha: out STD_LOGIC        
        
        );
end component;

    
begin

    process(clk)
        begin
            if (rising_edge(clk)) then
                if (reset='1') then
                    c_out<= '0';
                    sum<='0';
                else
                    sum<=temp_sum;
                    c_out<=HA1_C or HA2_C;
                end if; 
            end if; 
    end process;
    
    ha_1: HA
         port map(
             a_ha => A,
             b_ha => B,
             s_ha => HA1_S,
             c_ha => HA1_C
             
         );
    ha_2: HA
         port map(
             a_ha => HA1_S,
             b_ha => C_in,
             s_ha => temp_SUM,
             c_ha => HA2_C
             
            );
            
end Structural;