library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity shift_reg_tb is
end shift_reg_tb;

architecture bench of shift_reg_tb is

    component shift_reg is
        port (
            clk,rst,si,en,pl,rl: in std_logic;
            din: in std_logic_vector(3 downto 0);
            so:  out std_logic            
        );
    end component;

    signal clk : std_logic;
    signal rst : std_logic := '0';
    signal si  : std_logic := '0';
    signal en  : std_logic := '0';
    signal pl  : std_logic := '0';
    signal rl  : std_logic := '0';
    signal din : std_logic_vector(3 downto 0) := (others => '0');

    signal so : std_logic;
    
    constant CLOCK_PERIOD : time := 10 ps;

begin
    utt: shift_reg
        port map (
            clk => clk,
            rst => rst,
            si  => si,
            en  => en,
            pl  => pl,
            rl  => rl,
            din => din,
            so  => so
        );

        stimulus : process
        begin
            -- Test Parallel Loading
            rst <= '1';
            en <= '0';
            si <= '0';
            pl <= '1';
            rl <= '0';
            din <= "0101";
            wait for CLOCK_PERIOD;      -- sreg => 0101 & so =>1
            
            -- Test shift with rl '0' == right
            pl <= '0';
            en <= '1';
            rl <= '0';
            si <= '1';
            wait for CLOCK_PERIOD;      -- sreg => 1010 & so => 0
            si <= '0';
            wait for 4*CLOCK_PERIOD;    -- sreg => 0101 -> 0010 -> 0001 -> 0000 
                                        -- so => 1 -> 0 -> 1 -> 0
            
            -- Test shift with rl '1' == left
            pl <= '0';
            en <= '1';
            rl <= '1';
            si <= '1'; 
            wait for 4*CLOCK_PERIOD;    -- sreg => 0001 -> 0011 -> 0111 -> 1111
                                        -- so => 0 -> 0 -> 0 -> 1
            -- Test reset
            si <= '0';
            rl <= '0';
            rst <= '0';
            wait for CLOCK_PERIOD;      -- shifting occours but so is 0 so reset is working
                                        -- (sreg was 1111 so with a shift  if reset didnt work so should be 1)
            
            -- Test enable
            rst <= '1';
            en <= '0';
            si <= '0';
            pl <= '1';
            rl <= '0';
            din <= "0001";
            wait for CLOCK_PERIOD;      -- sreg => 0001 & so => 1
            pl <= '0';
            wait for 2*CLOCK_PERIOD;    -- we must see that so is still 1
                                        -- so shifting does not ocour without enable
            en <= '1';
            wait for 2*CLOCK_PERIOD;    -- now so => 0 due to right shifting
        end process ; -- stimulus

        generate_clock : process
        begin
            clk <= '0';
            wait for CLOCK_PERIOD/2;
            clk <= '1';
            wait for CLOCK_PERIOD/2;
        end process ; -- generate_clock
end bench ; -- bench