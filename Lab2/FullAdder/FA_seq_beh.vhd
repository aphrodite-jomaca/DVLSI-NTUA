library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity FA_seq_beh is
 Port ( A: in STD_LOGIC;
        B: in STD_LOGIC;
        C_in: in STD_LOGIC;
        CLK: in STD_LOGIC;
        reset: in STD_LOGIC;
        C_out: out STD_LOGIC;
        SUM: out STD_LOGIC 
        );
end FA_seq_beh;

architecture Behavioral of FA_seq_beh is
signal addition_vector: std_logic_vector(1 downto 0);
signal a_temp : std_logic_vector(1 downto 0);
signal b_temp : std_logic_vector(1 downto 0);
signal c_in_temp : std_logic_vector(1 downto 0);
begin
        process(CLK)
            begin
                if(rising_edge(CLK)) then
                    if(reset='1') then
                        C_out<='0';
                        SUM<='0';
                    else
                        SUM <= addition_vector(0);
                        C_out <= addition_vector(1);  
                    end if;  
                end if;      
        end process;
        addition_vector<= ('0'& a) + ('0'& b )+ ('0'& c_in);
end Behavioral;