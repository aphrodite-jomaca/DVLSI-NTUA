library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity rca_pipe is
    Port (
    a: in std_logic_vector (3 downto 0);
    b: in std_logic_vector (3 downto 0);
    c_in: in std_logic;
    clk: in std_logic;
    rst: in std_logic;
    s: out std_logic_vector (3 downto 0);
    c_out: out std_logic
     );
end rca_pipe;

architecture Behavioral of rca_pipe is

component FA_seq_beh is
Port ( A     : in STD_LOGIC;
       B     : in STD_LOGIC; 
       C_in  : in STD_LOGIC;
       Clk   : in STD_LOGIC;
       reset : in STD_LOGIC;
       C_out  : out STD_LOGIC;
       SUM    : out STD_LOGIC );
end component;
       
signal r1: std_logic_vector(5 downto 0) := (others=>'0');
signal r2: std_logic_vector(4 downto 0) := (others=>'0');
signal r3: std_logic_vector(3 downto 0) := (others=>'0');
signal r4: std_logic_vector(2 downto 0) := (others=>'0');

signal c1,c2,c3,s1,s2,s3,s4,c4 : std_logic := '0';

begin

reg: process(clk)
begin
    if (rising_edge(clk)) then
        r4 <= r3(1 downto 0) & s3 ;                            --            r4(s1,s2,s3)
        r3 <= r2(4) & r2(2) & r2(0) & s2;                      --         r3(a3,b3,s1,s2)
        r2 <= r1(5 downto 4) & r1(2 downto 1) & s1;            --      r2(a3,a2,b3,b2,s1)
        r1 <= a(3 downto 1) & b(3 downto 1) ;                  --   r1(a3,a2,a1,b3,b2,b1)
     end if;
end process;

    s <= s4 & r4(0) & r4(1) & r4(2);
    c_out <= c4;

fa1: fa_seq_beh port map(a(0), b(0), c_in,   clk, rst, c1, s1);
fa2: fa_seq_beh port map(r1(3), r1(0), c1,   clk, rst, c2, s2);
fa3: fa_seq_beh port map(r2(3), r2(1), c2,   clk, rst, c3, s3);
fa4: fa_seq_beh port map(r3(3), r3(2), c3,   clk, rst, c4, s4);


end Behavioral;