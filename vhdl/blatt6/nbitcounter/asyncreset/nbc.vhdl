library ieee;
use ieee.std_logic_1164.all;
Use ieee.numeric_std.all;

entity nbc is
    generic(n : integer := 3);
    port(
        count : in std_logic;
        reset : in std_logic;
        cout : out std_logic_vector(n-1 downto 0)
    );
end;

architecture behavior of nbc is
    signal output : unsigned(n-1 downto 0) := to_unsigned(0, n);
begin

    process (count)
    begin
        if rising_edge(reset) then
            output <= to_unsigned(0, n);
        else
            if rising_edge(count) then
                output <= output + 1;
            end if;
        end if;    
    end process;
    
    cout <= std_logic_vector( output );
    
end behavior;
