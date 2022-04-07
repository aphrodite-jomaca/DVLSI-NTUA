library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity SYS_MUL is
  port (
    A: in STD_LOGIC_VECTOR(3 downto 0);
    B: in STD_LOGIC_VECTOR(3 downto 0);
    clk: in STD_LOGIC;
    P: out STD_LOGIC_VECTOR(7 downto 0)
  );
end SYS_MUL;

architecture Structural of SYS_MUL is

    component MUL_CELL is
        port(
            clk: in std_logic;
            a: in std_logic;
            b: in std_logic;
            cin: in std_logic;
            sin: in std_logic;
            cout: out std_logic;
            sout: out std_logic
        );
    end component;

    -- Pipeline Registers
    --6 bits
    signal r9: std_logic_vector(5 downto 0);
    --7 bits
    signal r7: std_logic_vector(6 downto 0);
    --8 bits
    signal r0,r8: std_logic_vector(7 downto 0);
    --9 bits
    signal r1,r2,r3,r5,r6: std_logic_vector(8 downto 0);
    --10 bits
    signal r4: std_logic_vector(9 downto 0);

    --In-Between Carrys/Sums/Products
    signal c00,c01,c02,c03,c10,c11,c12,c13,c20,c21,c22,c23,c30,c31,c32,
           s01,s02,s03,s11,s12,s13,s21,s22,s23,
           p0,p1,p2,p3,p4,p5,p6,p7: std_logic;

begin
mc00: MUL_CELL
        port map(clk => clk, a => A(0), b => B(0), cin => '0', sin => '0', cout => c00, sout => p0);
mc01: MUL_CELL
        port map(clk => clk, a => r0(1), b => r0(4), cin => c00, sin => '0', cout => c01, sout => s01);
mc02: MUL_CELL
        port map(clk => clk, a => r1(2), b => r1(4), cin => c01, sin => '0', cout => c02, sout => s02);
mc03: MUL_CELL
        port map(clk => clk, a => r2(3), b => r2(4), cin => c02, sin => '0', cout => c03, sout => s03);    
mc10: MUL_CELL
        port map(clk => clk, a => r1(0), b => r1(5), cin => '0', sin => s01, cout => c10, sout => p1);
mc11: MUL_CELL
        port map(clk => clk, a => r2(1), b => r2(5), cin => c10, sin => s02, cout => c11, sout => s11);
mc12: MUL_CELL
        port map(clk => clk, a => r3(2), b => r3(4), cin => c11, sin => s03, cout => c12, sout => s12);
mc13: MUL_CELL
        port map(clk => clk, a => r4(3), b => r4(4), cin => c12, sin => r4(9), cout => c13, sout => s13);
mc20: MUL_CELL
        port map(clk => clk, a => r3(0), b => r3(5), cin => '0', sin => s11, cout => c20, sout => p2);
mc21: MUL_CELL
        port map(clk => clk, a => r4(1), b => r4(5), cin => c20, sin => s12, cout => c21, sout => s21);
mc22: MUL_CELL
        port map(clk => clk, a => r5(2), b => r5(4), cin => c21, sin => s13, cout => c22, sout => s22);
mc23: MUL_CELL
        port map(clk => clk, a => r6(2), b => r6(3), cin => c22, sin => r6(8), cout => c23, sout => s23);
mc30: MUL_CELL
        port map(clk => clk, a => r5(0), b => r5(5), cin => '0', sin => s21, cout => c30, sout => p3);
mc31: MUL_CELL
        port map(clk => clk, a => r6(0), b => r6(4), cin => c30, sin => s22, cout => c31, sout => p4);
mc32: MUL_CELL
        port map(clk => clk, a => r7(0), b => r7(2), cin => c31, sin => s23, cout => c32, sout => p5);
mc33: MUL_CELL
        port map(clk => clk, a => r8(0), b => r8(1), cin => c32, sin => r8(7), cout => p7, sout => p6);

  next_clk : process( clk )
  begin
    if rising_edge(clk) then
      --r0 <= B(3 downto 0) & A(3 downto 0); --8bits
      --r1 <= p0 & r0; --9bits
      --r2 <= r1; --9bits
      --r3 <= p1 & r2(8 downto 5) & r2(3 downto 0); --9bits
      --r4 <= r3(8 downto 7) & c03 & r3(6 downto 0); --10bits
      --r5 <= p2 & r4(9 downto 8) & r4(6 downto 5) & r4(3 downto 0); --9bits
      --r6 <= r5(8 downto 6) & c13 & r5(5 downto 1); --9bits
      --r7 <= p3 & r6(8 downto 6) & r6(4) & r6(2 downto 1); --7bits
      --r8 <= p4 & r7(6 downto 3) & c23 & r7(2 downto 1); --8bits

      r9 <= p5 & r8(6 downto 2); --6bits                        r9(p0,p1,p2,p3,p4,p5)
      r8 <= c23 & p4 & r7(6 downto 1); --8bits                  r8(a3,b3,p0,p1,p2,p3,p4,c23)
      r7 <= p3 & r6(7 downto 4) & r6(2 downto 1); --7bits       r7(a2,a3,b3,p0,p1,p2,p3)
      r6 <= c13 & r5(8 downto 1); --9bits                       r6(a1,a2,a3,b2,b3,p0,p1,p2,c13)
      r5 <= p2 & r4(8 downto 5) & r4(3 downto 0); --9bits       r5(a0,a1,a2,a3,b2,b3,p0,p1,p2)
      r4 <= c03 & r3(8 downto 0); --10bits                      r4(a0,a1,a2,a3,b1,b2,b3,p0,p1,c03)
      r3 <= p1 & r2(8 downto 5) & r2(3 downto 0); --9bits       r3(a0,a1,a2,a3,b1,b2,b3,p0,p1)
      r2 <= r1(8 downto 0); --9bits                             r2(a0,a1,a2,a3,b0,b1,b2,b3,p0)
      r1 <= p0 & r0(7 downto 0); --9bits                        r1(a0,a1,a2,a3,b0,b1,b2,b3,p0)
      r0 <= B(3 downto 0) & A(3 downto 0) ; --8bits             r0(a0,a1,a2,a3,b0,b1,b2,b3)
    end if;
  end process ; -- next_clk

  P <= p7 & p6 & r9(5 downto 0);

end Structural ; -- Structural