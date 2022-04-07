library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
entity counter is
port(   clk, resetn, dir , count_en : in std_logic;
        sum : out std_logic_vector(2 downto 0);
        cout : out std_logic
    );
end;

architecture beh_counter of counter is
    signal count : std_logic_vector(2 downto 0);
    begin
    process(clk, resetn)
    begin
        if resetn='0' then      
            count <= (others=>'0');
        elsif (rising_edge(clk) and count_en = '1' ) then
            if (dir ='1') then
                count <= count+1;
            else
                count <= count-1; 
            end if;
        end if;
    end process;
    sum <= count;
    cout <= '1' when ((count_en = '1' and count="111" and dir='1') or (count_en = '1' and count="000" and dir='0')) else '0';
end;