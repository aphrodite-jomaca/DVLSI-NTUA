library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.math_real.all;

entity FIR_pipelined_tb is
end FIR_pipelined_tb;

architecture Behavioral of FIR_pipelined_tb is

    constant M, data_width, coeff_width : integer := 8;
    
    component FIR_pipelined is
        generic (
                M : integer := 8;
                data_width : integer := 8;
                coeff_width : integer := 8
                );
        Port (
            clk : in std_logic;
            rst : in std_logic;
            valid_in :in std_logic;
            x : in std_logic_vector (data_width-1 downto 0);
            valid_out : out std_logic;
            fir_out : out std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0)
            );
    end component;
    
    signal clk, rst, valid_in, valid_out: std_logic;
    signal x : std_logic_vector(data_width-1 downto 0); 
    signal fir_out : std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);

    constant CLKP : time := 10ns;

    begin
        UUT: FIR_pipelined 
            port map(
                    clk => clk,
                    rst => rst,
                    valid_in => valid_in, 
                    x => x,
                    valid_out => valid_out,
                    fir_out => fir_out
                    );
        
        clk_proc:process
            begin
                clk <= '0';
                wait for CLKP/2;
                clk <= '1';
                wait for CLKP/2;
        end process clk_proc;

        test:process
            begin
                rst <= '1';
                valid_in <= '1';
                x <= "00011011";
                wait for CLKP/4;
                rst<='0';
                wait for 3*CLKP/4;
                valid_in <= '1';
                x <= "11110110";
                wait for CLKP;
                x <= "00000001";
                wait for CLKP;
                x <= "11000110";
                wait for CLKP;
                x <= "11010001";
                wait for CLKP;
                x <= "11011110";
                wait for CLKP;
                x <= "00010101";
                wait for CLKP;
                x <= "01100110";
                wait for CLKP;
                x <= "01000010";
                wait for CLKP;
                x <= "11001100";
                wait for CLKP;
    
                x <= (others => '0');
                valid_in <= '0';
                wait for CLKP;
                valid_in <= '1';
                wait for 16*CLKP;
        end process; 
end Behavioral;