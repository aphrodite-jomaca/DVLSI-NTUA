library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity rca_pipe_tb is
end rca_pipe_tb;

architecture test_bench of rca_pipe_tb is

     component rca_pipe
          Port (
          a: in std_logic_vector (3 downto 0);
          b: in std_logic_vector (3 downto 0);
          c_in: in std_logic;
          clk: in std_logic;
          rst: in std_logic;
          s: out std_logic_vector (3 downto 0);
          c_out: out std_logic
               );
     end component;

--Input Signals
     signal a: std_logic_vector (3 downto 0):= (others=>'0');
     signal b: std_logic_vector (3 downto 0):= (others=>'0');
     signal c_in: std_logic:= '0';
     signal clk: std_logic:='0';
     signal rst: std_logic:='0';

--Output Signals
     signal s: std_logic_vector(3 downto 0);
     signal c_out: std_logic := '0';

--Clock
     constant CLKP : time := 1ns;

     begin
          UUT: rca_pipe2 port map(
                                   a=>a,
                                   b=>b,
                                   c_in=>c_in,
                                   clk=>clk,
                                   rst=>rst,
                                   s=>s,
                                   c_out=>c_out
                                   );
          clk_proc: process
               begin
                    clk <= '0';
                    wait for CLKP/2;
                    clk <= '1';
                    wait for CLKP/2;
               end process;
               
          tests: process
               begin
                    rst<='1';
                    a<="0010";
                    b<="0010";
                    c_in<='0';
                    wait for CLKP;

                    rst<='0';
                    a<="0010";
                    b<="0001";
                    wait for CLKP;

                    a<="0100";
                    b<="0100";
                    rst<='0';
                    wait for CLKP;

                    a<="1111";
                    b<="1111";
                    wait for CLKP;

                    a<="1100";
                    b<="0001";
                    wait for CLKP;

                    a<="1100";
                    b<="1011";
                    wait for CLKP;

                    a<="0100";
                    b<="0001";
                    wait for CLKP;

                    a<="0110";
                    b<="1011";
                    wait;
     end process;
end test_bench;