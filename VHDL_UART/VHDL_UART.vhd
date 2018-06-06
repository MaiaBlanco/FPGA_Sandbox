library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
--library UART_LIB;
--use UART_LIB.all;

entity UART is
port(
	CLOCK_50: in std_logic;
	SW: in std_logic_vector(9 downto 0);
	KEY: in std_logic_vector(3 downto 0);
	LEDR: out std_logic_vector(9 downto 0);
	LEDG: out std_logic_vector(7 downto 0);
	UART_TXD: out std_logic;
	UART_RXD: in std_logic
);
end UART;


architecture MAIN of UART is
signal TX_DATA: std_logic_vector(7 downto 0);
signal TX_START: std_logic:='0';
signal TX_BUSY: std_logic; -- Why not set 0?
-----------------------------------------
COMPONENT TX
PORT(
	CLK: in std_logic;
	START: in std_logic;
	BUSY: out std_logic;
	DATA: in std_logic_vector(7 downto 0);
	TX_LINE: out std_logic
);
end component TX;

begin

C1: TX port map (CLOCK_50, TX_START, TX_BUSY, TX_DATA, UART_TXD);

PROCESS(CLOCK_50)
begin
if (CLOCK_50'event and CLOCK_50='1') then
	if (KEY(0) = '0' and TX_BUSY='0') then
		TX_DATA<=sw(7 downto 0);
		TX_START<='1';
		LEDR(7 downto 0)<=TX_DATA;
	else
		TX_START<='0';
	end if;
end if;

end process;

end main;