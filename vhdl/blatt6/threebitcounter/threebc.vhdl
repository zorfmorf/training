library ieee;
use ieee.std_logic_1164.all;

entity threebc is
    port(
        count : in std_logic;
        cout : out std_logic_vector(2 downto 0)
    );
end;

architecture behavior of threebc is
    signal output : std_logic_vector(2 downto 0) := ( others => '0');
begin

    process (count)
    begin
        if rising_edge(count) then
            if (output(0) = '1' and output(1) = '1' and output(2)= '1') then
                output <= (others => '0');
            else
                output(0) <= not output(0);
                output(1) <= output(1) xor output(0);
                output(2) <= output(2) or (output(1) and output(0));
            end if;
            cout <= output;
        end if;    
    end process;
    
end behavior;
