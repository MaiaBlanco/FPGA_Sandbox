module Adder (
b0_in,
a0_in,
c0_out,
carry_out
);

// Input Ports:
input b0_in;
input a0_in;

// Output Ports:
output c0_out;
output carry_out;

assign c0_out = a0_in | b0_in;
assign carry_out = a0_in & b0_in;

endmodule