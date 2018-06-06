// Based on http://www.fpga4fun.com/MusicBox1.html
// Copright Mark Blanco
// Date 2/10/18

module music(
clk,
speaker
);

input clk;
output speaker;

reg [15:0] counter;
always @(posedge clk) counter <= counter+1;

assign speaker = counter[15];
endmodule

