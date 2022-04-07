library ieee;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


entity dvlsi2021_lab5_top is
  port (
        DDR_cas_n         : inout STD_LOGIC;
        DDR_cke           : inout STD_LOGIC;
        DDR_ck_n          : inout STD_LOGIC;
        DDR_ck_p          : inout STD_LOGIC;
        DDR_cs_n          : inout STD_LOGIC;
        DDR_reset_n       : inout STD_LOGIC;
        DDR_odt           : inout STD_LOGIC;
        DDR_ras_n         : inout STD_LOGIC;
        DDR_we_n          : inout STD_LOGIC;
        DDR_ba            : inout STD_LOGIC_VECTOR( 2 downto 0);
        DDR_addr          : inout STD_LOGIC_VECTOR(14 downto 0);
        DDR_dm            : inout STD_LOGIC_VECTOR( 3 downto 0);
        DDR_dq            : inout STD_LOGIC_VECTOR(31 downto 0);
        DDR_dqs_n         : inout STD_LOGIC_VECTOR( 3 downto 0);
        DDR_dqs_p         : inout STD_LOGIC_VECTOR( 3 downto 0);
        FIXED_IO_mio      : inout STD_LOGIC_VECTOR(53 downto 0);
        FIXED_IO_ddr_vrn  : inout STD_LOGIC;
        FIXED_IO_ddr_vrp  : inout STD_LOGIC;
        FIXED_IO_ps_srstb : inout STD_LOGIC;
        FIXED_IO_ps_clk   : inout STD_LOGIC;
        FIXED_IO_ps_porb  : inout STD_LOGIC
       );
end entity; -- dvlsi2021_lab5_top

architecture arch of dvlsi2021_lab5_top is

  constant N : integer := 1024;
  
  component design_1_wrapper is
    port (
          DDR_cas_n         : inout STD_LOGIC;
          DDR_cke           : inout STD_LOGIC;
          DDR_ck_n          : inout STD_LOGIC;
          DDR_ck_p          : inout STD_LOGIC;
          DDR_cs_n          : inout STD_LOGIC;
          DDR_reset_n       : inout STD_LOGIC;
          DDR_odt           : inout STD_LOGIC;
          DDR_ras_n         : inout STD_LOGIC;
          DDR_we_n          : inout STD_LOGIC;
          DDR_ba            : inout STD_LOGIC_VECTOR( 2 downto 0);
          DDR_addr          : inout STD_LOGIC_VECTOR(14 downto 0);
          DDR_dm            : inout STD_LOGIC_VECTOR( 3 downto 0);
          DDR_dq            : inout STD_LOGIC_VECTOR(31 downto 0);
          DDR_dqs_n         : inout STD_LOGIC_VECTOR( 3 downto 0);
          DDR_dqs_p         : inout STD_LOGIC_VECTOR( 3 downto 0);
          FIXED_IO_mio      : inout STD_LOGIC_VECTOR(53 downto 0);
          FIXED_IO_ddr_vrn  : inout STD_LOGIC;
          FIXED_IO_ddr_vrp  : inout STD_LOGIC;
          FIXED_IO_ps_srstb : inout STD_LOGIC;
          FIXED_IO_ps_clk   : inout STD_LOGIC;
          FIXED_IO_ps_porb  : inout STD_LOGIC;
          --------------------------------------------------------------------------
          ----------------------------------------------- PL (FPGA) COMMON INTERFACE
          ACLK                                : out STD_LOGIC;
          ARESETN                             : out STD_LOGIC_VECTOR(0 to 0);
          ------------------------------------------------------------------------------------
          -- PS2PL-DMA AXI4-STREAM MASTER INTERFACE TO ACCELERATOR AXI4-STREAM SLAVE INTERFACE
          M_AXIS_TO_ACCELERATOR_tdata         : out STD_LOGIC_VECTOR(7 downto 0);
          --M_AXIS_TO_ACCELERATOR_tkeep         : out STD_LOGIC_VECTOR( 0    to 0);
          M_AXIS_TO_ACCELERATOR_tlast         : out STD_LOGIC;
          M_AXIS_TO_ACCELERATOR_tready        : in  STD_LOGIC;
          M_AXIS_TO_ACCELERATOR_tvalid        : out STD_LOGIC;
          ------------------------------------------------------------------------------------
          -- ACCELERATOR AXI4-STREAM MASTER INTERFACE TO PL2P2-DMA AXI4-STREAM SLAVE INTERFACE
          S_AXIS_S2MM_FROM_ACCELERATOR_tdata  : in  STD_LOGIC_VECTOR(31 downto 0);
          --S_AXIS_S2MM_FROM_ACCELERATOR_tkeep  : in  STD_LOGIC_VECTOR( 3 downto 0);
          S_AXIS_S2MM_FROM_ACCELERATOR_tlast  : in  STD_LOGIC;
          S_AXIS_S2MM_FROM_ACCELERATOR_tready : out STD_LOGIC;
          S_AXIS_S2MM_FROM_ACCELERATOR_tvalid : in  STD_LOGIC
         );
  end component design_1_wrapper;
  
  component DEBAYERING
      generic( N: integer := 1024 );
      port (
          clk :       IN STD_LOGIC;
          rst_n :     IN STD_LOGIC_vector(0 downto 0);
          new_image : IN STD_LOGIC;
          valid_in :  IN STD_LOGIC;
          halt :      IN STD_LOGIC;
          pixel :     IN STD_LOGIC_VECTOR(7 DOWNTO 0);
          R : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
          G : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
          B : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
          valid_out:      OUT STD_LOGIC;
          image_finished: OUT STD_LOGIC
      );
  end component;

-------------------------------------------
-- INTERNAL SIGNAL & COMPONENTS DECLARATION

  signal aclk    : std_logic;
  signal aresetn : std_logic_vector(0 to 0);

  signal tmp_tdata  : std_logic_vector(7 downto 0);
  signal R  : std_logic_vector(7 downto 0);
  signal G  : std_logic_vector(7 downto 0);
  signal B  : std_logic_vector(7 downto 0);
  signal tmp_tdata_32: std_logic_vector(31 downto 0); 
  --signal tmp_tkeep  : std_logic_vector(0 downto 0) := "1";
  --signal tmp_tkeep_4: std_logic_vector(3 downto 0);
  --signal counter: std_logic_vector(20 downto 0);
  signal tmp_tlast_ps2pl  : std_logic;
  signal tmp_tlast_pl2ps  : std_logic;
  signal tmp_tready_s : std_logic;
  signal tmp_tready_m : std_logic;
  signal tmp_tvalid_in : std_logic;
  signal tmp_tvalid_out : std_logic;
  signal valid: std_logic;
  signal cnt: std_logic_vector(3 downto 0) :=  (others => '0');
  --signal image_finished : std_logic;
  signal new_image  : std_logic;

begin
  
  tmp_tready_s <= tmp_tready_m and tmp_tvalid_in when tmp_tvalid_out = '1'  else tmp_tvalid_in;
  tmp_tdata_32 <= "00000000" & R & G & B;
  --tmp_tlast_pl2ps <= '1' when image_finished = '1';
  --tmp_tkeep_4 <= "1111";
  
  PROCESSING_SYSTEM_INSTANCE : design_1_wrapper
    port map (
              DDR_cas_n         => DDR_cas_n,
              DDR_cke           => DDR_cke,
              DDR_ck_n          => DDR_ck_n,
              DDR_ck_p          => DDR_ck_p,
              DDR_cs_n          => DDR_cs_n,
              DDR_reset_n       => DDR_reset_n,
              DDR_odt           => DDR_odt,
              DDR_ras_n         => DDR_ras_n,
              DDR_we_n          => DDR_we_n,
              DDR_ba            => DDR_ba,
              DDR_addr          => DDR_addr,
              DDR_dm            => DDR_dm,
              DDR_dq            => DDR_dq,
              DDR_dqs_n         => DDR_dqs_n,
              DDR_dqs_p         => DDR_dqs_p,
              FIXED_IO_mio      => FIXED_IO_mio,
              FIXED_IO_ddr_vrn  => FIXED_IO_ddr_vrn,
              FIXED_IO_ddr_vrp  => FIXED_IO_ddr_vrp,
              FIXED_IO_ps_srstb => FIXED_IO_ps_srstb,
              FIXED_IO_ps_clk   => FIXED_IO_ps_clk,
              FIXED_IO_ps_porb  => FIXED_IO_ps_porb,
              --------------------------------------------------------------------------
              ----------------------------------------------- PL (FPGA) COMMON INTERFACE
              ACLK                                => aclk,    -- clock to accelerator
              ARESETN                             => aresetn, -- reset to accelerator, active low
              ------------------------------------------------------------------------------------
              -- PS2PL-DMA AXI4-STREAM MASTER INTERFACE TO ACCELERATOR AXI4-STREAM SLAVE INTERFACE
              M_AXIS_TO_ACCELERATOR_tdata         => tmp_tdata,
              --M_AXIS_TO_ACCELERATOR_tkeep         => tmp_tkeep,
              M_AXIS_TO_ACCELERATOR_tlast         => tmp_tlast_ps2pl,
              M_AXIS_TO_ACCELERATOR_tready        => tmp_tready_s,
              M_AXIS_TO_ACCELERATOR_tvalid        => tmp_tvalid_in,
              ------------------------------------------------------------------------------------
              -- ACCELERATOR AXI4-STREAM MASTER INTERFACE TO PL2P2-DMA AXI4-STREAM SLAVE INTERFACE
              S_AXIS_S2MM_FROM_ACCELERATOR_tdata  => tmp_tdata_32,
              --S_AXIS_S2MM_FROM_ACCELERATOR_tkeep  => tmp_tkeep_4,
              S_AXIS_S2MM_FROM_ACCELERATOR_tlast  => tmp_tlast_pl2ps,
              S_AXIS_S2MM_FROM_ACCELERATOR_tready => tmp_tready_m,
              S_AXIS_S2MM_FROM_ACCELERATOR_tvalid => tmp_tvalid_out
             );
    ACCELERATOR :DEBAYERING
         port map(   
              clk => aclk,
              rst_n => aresetn,
              new_image => new_image,
              valid_in => tmp_tvalid_in,
              halt => tmp_tready_m,
              pixel => tmp_tdata,
              R => R,
              G => G,
              B => B,
              valid_out => tmp_tvalid_out,
              image_finished => tmp_tlast_pl2ps
             );
----------------------------
-- COMPONENTS INSTANTIATIONS

process(aclk)
begin
  --if image_finished = '1' or tmp_tlast_pl2ps = '1' then
    --  if cnt < 10 then
      --    cnt <= cnt + 1;
        --  tmp_tlast_pl2ps <= '1';
      --else
        --  tmp_tlast_pl2ps <= '0';
      --end if;
  --end if;
    if rising_edge(aclk) then
        new_image <= tmp_tlast_ps2pl;
    end if;
end process;
end architecture; -- arch