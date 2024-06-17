library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity FSM is
  Port (
  reset: in STD_LOGIC;
  clk: in STD_LOGIC;
  x: in STD_LOGIC;
  z: out STD_LOGIC);
end FSM;

architecture Behavioral of FSM is
type statenames is (stateA, stateB, stateC);
signal state_reg : statenames;
signal state_next : statenames;
begin

process(clk,reset)
begin
    if reset = '1' then
        state_reg <= stateA;
        elsif rising_edge(clk) then
        state_reg <= state_next;
        end if;
        end process; 

process (state_reg)
begin
    case state_reg is
    when stateA =>
    state_next <= stateB;
    when stateB =>
    state_next <= stateC;
    when stateC =>
    state_next <= stateA;
    when others =>
    state_next <= stateA;
    end case;
    end process;

    process(state_reg)
    begin
    case state_reg is
        when stateA =>
        z <= '0';
        when stateB =>
        z <= '1';
        when stateC =>
        z <= '1';
        when others =>
        z <= '0';
        end case;
        end process;
end Behavioral;

begin component FSM
	port 
