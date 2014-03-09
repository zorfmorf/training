library ieee;
use ieee.std_logic_1164.all;

entity module_tb is
end module_tb;

architecture behavior of module_tb is

    component module is
        port(
            a : in std_logic;
            b : in std_logic;
            w : out std_logic;
            x : out std_logic;
            y : out std_logic;
            z : out std_logic
        );
    end component;
    
    signal a, b, w, x, y, z : std_logic;
    
begin
        
    module_0: module port map(a => a, b => b, w => w, x => x, y => y, z => z);
    
    process
    begin
    
        a <= '0';
        b <= '1';
        wait for 15 ns;
        
        a <= '0';
        b <= '0';
        wait for 5 ns;
        
        a <= '1';
        b <= '0';
        wait for 15 ns;
        
        a <= '0';
        b <= '0';
        wait for 15 ns;
        
        a <= '1';
        b <= '0';
        wait for 8 ns;
        
        a <= '0';
        b <= '0';
        
        assert false report "testing done!" severity note;
        wait;
        
    end process;

end behavior;
