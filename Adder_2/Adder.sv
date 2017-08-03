module Adder (
b0_in_n,
a0_in_n,
c0_out,
carry_out
);

// Input Ports:
input b0_in_n;
input a0_in_n;

// Output Ports:
output c0_out;
output carry_out;

assign c0_out = !a0_in_n | !b0_in_n;
assign carry_out = !a0_in_n & !b0_in_n;

endmodule