library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity dec3to8_tb is
end dec3to8_tb;

architecture bench of dec3to8_tb is

    component dec3to8 is
        port (
            enc : in std_logic_vector(2 downto 0);
            dec : out std_logic_vector(7 downto 0)
             );
    end component;
    
    signal clock : std_logic;
    signal enc : std_logic_vector(2 downto 0) := (others => '0');
    signal dec : std_logic_vector(7 downto 0) := (others => '0');

    constant CLOCK_PERIOD : time := 10 ps;

begin

    uut : dec3to8
        port map (
                  enc   => enc,
                  dec   => dec
                 );

    stimulus : process
    begin
        enc <= (others => '0');
        wait for CLOCK_PERIOD;
        for i in 1 to 7 loop
            enc <= std_logic_vector(to_unsigned(i,3));
            wait for CLOCK_PERIOD;
        end loop ;
        enc <= (others => '0'); 
        wait;
    end process ; --   stimulus

    generate_clock : process
    begin
        clock <= '0';
        wait for CLOCK_PERIOD/2;
        clock <= '1';
        wait for CLOCK_PERIOD/2;
    end process ; -- generate_clock

end bench ; -- benc