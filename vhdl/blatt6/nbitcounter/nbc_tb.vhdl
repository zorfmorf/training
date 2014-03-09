library ieee;
use ieee.std_logic_1164.all;

entity nbc_tb is
end nbc_tb;

architecture behavior of nbc_tb is

    component nbc is
        generic ( n : integer := 5 );
        port(
            count : in std_logic;
            cout : out std_logic_vector(n-1 downto 0)
        );
    end component;
    
    signal b : std_logic_vector(4 downto 0);
    signal clk : std_logic := '0';
    
begin
        
    nbc0: nbc
        generic map(n => 5)
        port map(clk, b);
    
    clk_process : process
    begin
    
        for i in 1 to 100 loop
            
            clk <= not clk;
            wait for 62.5 ns;
        
        end loop;
        
        wait;
        
    end process;

end behavior;
