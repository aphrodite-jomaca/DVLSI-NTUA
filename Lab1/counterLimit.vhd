library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
entity counter_lmt is
port(   clk, resetn, count_en : in std_logic;
        limit : in std_logic_vector(2 downto 0);
        sum : out std_logic_vector(2 downto 0);
        cout : out std_logic
    );
end;

architecture beh_counter of counter_lmt is
    signal count : std_logic_vector(2 downto 0);
    begin
    process(clk, resetn)
    begin
        if resetn='0' then 
            count <= (others=>'0');
        elsif (rising_edge(clk) and count_en = '1' ) then
            if (count /= limit) then
                count <= count+1;
            else 
                count <= "000";
            end if;
        end if;
    end process;
    sum <= count;
    cout <= '1' when (count_en = '1' and count = limit) else '0';
    end;