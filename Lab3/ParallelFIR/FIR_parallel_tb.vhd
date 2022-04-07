library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.math_real.all;

entity FIR_parallel_tb is
end FIR_parallel_tb;

architecture Behavioral of FIR_parallel_tb is

    constant M, data_width, coeff_width : integer := 8;
    
    component FIR_parallel is
        generic (
                M : integer := 8;
                data_width : integer := 8;
                coeff_width : integer := 8
                );
        Port (
            clk : in std_logic;
            rst : in std_logic;
            valid_in :in std_logic;
            x1 : in std_logic_vector (data_width-1 downto 0);
            x2 : in std_logic_vector (data_width-1 downto 0);
            valid_out : out std_logic;
            fir_out1 : out std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);
            fir_out2 : out std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0)
            );
    end component;
    
    signal clk, rst, valid_in, valid_out: std_logic;
    signal x1, x2 : std_logic_vector(data_width-1 downto 0); 
    signal fir_out1, fir_out2 : std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);

    constant CLKP : time := 10ns;

    begin
        UUT: FIR_parallel 
            port map(
                    clk => clk,
                    rst => rst,
                    valid_in => valid_in, 
                    x1 => x1,
                    x2 => x2,
                    valid_out => valid_out,
                    fir_out1 => fir_out1,
                    fir_out2 => fir_out2
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
                x1 <= "00011011";
                x2 <= "11110110";
                wait for CLKP/4;
                rst<='0';
                wait for 3*CLKP/4;
                valid_in <= '1';
                x1 <= "00000001";
                x2 <= "11000110";
                wait for CLKP;
                x1 <= "11010001";
                x2 <= "11011110";
                wait for CLKP;
                x1 <= "00010101";
                x2 <= "01100110";
                wait for CLKP;
                x1 <= "01000010";
                x2 <= "11001100";
                wait for CLKP;
    
                x1 <= (others => '0');
                x2 <= (others => '0');

                wait for 88*CLKP;
        end process; 
end Behavioral;