library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MUL_CELL is
  port (
    clk: in std_logic;
    a: in std_logic;
    b: in std_logic;
    cin: in std_logic;
    sin: in std_logic;
    cout: out std_logic;
    sout: out std_logic
  ) ;
end MUL_CELL;

architecture Structural of MUL_CELL is

    component FA_seq_beh is
        port(
            A: in std_logic;
            B: in std_logic;
            C_in: in std_logic;
            CLK: in std_logic;
            reset: in std_logic;
            C_out: out std_logic;
            SUM: out std_logic
        );
    end component;

    signal tmp: std_logic;

begin
    tmp <= a and b;

    fa: FA_seq_beh
            port map(
                A => tmp,
                B => sin,
                C_in => cin,
                CLK => clk,
                reset => '0',
                C_out => cout,
                SUM => sout
            );
end Structural ; -- Structural