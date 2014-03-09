library ieee;
use ieee.std_logic_1164.all;

entity threebc_tb is
end threebc_tb;

architecture behavior of threebc_tb is

    component threebc is
        port(
            count : in std_logic;
            cOut : out std_logic_vector(2 downto 0)
        );
    end component;
    
    signal b : std_logic_vector(2 downto 0);
    signal clk : std_logic := '0';
    
begin
        
    threebc0: threebc
        port map(clk, b);
    
    clk_process : process
    begin
    
        for i in 1 to 50 loop
            
            clk <= not clk;
            wait for 62.5 ns;
        
        end loop;
        
        wait;
        
    end process;

end behavior;
