
library ieee;
use ieee.std_logic_1164.all;

entity some_circuit is
	port(
		a : in std_logic_vector(1 downto 0);
        b : in std_logic_vector(1 downto 0);
        x : out std_logic;
        y : out std_logic
	);
end some_circuit;

architecture behavior of some_circuit is

    component my_and is
        port(
            a: in std_logic;
            b: in std_logic;
            x: out std_logic
        );
    end component;
    
    component my_nand is
        port(
            a: in std_logic;
            b: in std_logic;
            x: out std_logic
        );
    end component;
    
    component my_or is
        port(
            a: in std_logic;
            b: in std_logic;
            x: out std_logic
        );
    end component;
    
    component my_xor is
        port(
            a: in std_logic;
            b: in std_logic;
            x: out std_logic
        );
    end component;
    
    component my_xnor is
        port(
            a: in std_logic;
            b: in std_logic;
            x: out std_logic
        );
    end component;
    
    component my_not is
        port(
            a: in std_logic;
            x: out std_logic
        );
    end component;
    
    signal xorout, notb0, and1out, orout, notand1out : std_logic;
    
begin
    
    xor_gate : my_xor
        port map (a(0), a(1), xorout);
        
    not_gate1 : my_not
        port map (b(0), notb0);
    
    and_gate1 : my_and
        port map (a(1), notb0, and1out);
    
    or_gate : my_or
        port map (notb0, b(1), orout);
        
    and_gate2 : my_and
        port map (xorout, and1out, x);
    
    not_gate2 : my_not
        port map (and1out, notand1out);
        
    xnor_gate : my_xnor
        port map (notand1out, orout, y);
    
end behavior;
