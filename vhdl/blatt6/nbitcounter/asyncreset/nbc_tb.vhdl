library ieee;
use ieee.std_logic_1164.all;

entity nbc_tb is
end nbc_tb;

architecture behavior of nbc_tb is

    component nbc is
        generic ( n : integer := 5 );
        port(
            count : in std_logic;
            reset : in std_logic;
            cout : out std_logic_vector(n-1 downto 0)
        );
    end component;
    
    signal b : std_logic_vector(4 downto 0);
    signal clk, reset : std_logic := '0';
    
begin
        
    nbc0: nbc
        generic map(n => 5)
        port map(clk, reset, b);
    
    clk_process : process
    begin
    
        for i in 1 to 100 loop
            
            clk <= not clk;
            
            if i = 20 then
                reset <= '1';
            end if;
            
            if i = 25 then
                reset <= '0';
            end if;
            
            if i = 35 then
                reset <= '1';
            end if;
            
            if i = 40 then
                reset <= '0';
            end if;        
            
            wait for 62.5 ns;
        
        end loop;
        
        wait;
        
    end process;

end behavior;
