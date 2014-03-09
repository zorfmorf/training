library ieee;
use ieee.std_logic_1164.all;

entity adder_tb is
end adder_tb;

architecture behavior of adder_tb is

    component adder is
        port(
            a : in std_logic;
            b : in std_logic;
            s : out std_logic;
            c : out std_logic
        );
    end component;
    
    signal a, b, s, c : std_logic;
    
begin
        
    adder_0: adder port map(a => a, b => b, s => s, c => c);
    
    process
    begin
    
        a <= '0';
        b <= '0';
        wait for 10 ns;
        
        a <= '0';
        b <= '1';
        wait for 10 ns;
        
        a <= '1';
        b <= '0';
        wait for 10 ns;
        
        a <= '1';
        b <= '1';
        wait for 10 ns;
        
        assert false report "testing done!" severity note;
        wait;
        
    end process;

end behavior;
