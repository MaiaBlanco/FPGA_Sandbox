module Arbiter
(
clock		// Clock
,reset	// Active high, synchronized reset
,req_0	// Request 0
,req_1	// Request 1
,gnt_0	// Grant 0
,gnt_1	// Grant 1
,leds		// Blinky LEDs are a must :)
);

// Input Ports
input clock;
input reset;
input req_0;
input req_1;

// Outputs
output gnt_0, gnt_1;

reg gnt_0, gnt_1;

always @ (posedge clock or posedge reset)
if (reset) begin
	gnt_0 <= 0;
	gnt_1 <= 0;
end else if (req_0) begin
	gnt_0 <= 1;
	gnt_1 <= 0;
end else if (req_1) begin
	gnt_0 <= 0;
	gnt_1 <= 1;
end


// For fun, count on the LEDS
// Increment if Grant0, Decrement if grant 1, and hold otherwise
reg [7:0] counter;
output [7:0] leds;
// Some counter stuff to just count away for now...
always @ (posedge clock or posedge reset)
if (reset) begin
counter <= 0;
end else begin
	counter <= counter + 1;
end

// Assign out the register to the leds
assign leds = counter;


endmodule

// Testbench code here:
module arbiter_tb;

reg clock, reset, req0, req1;
wire gnt0,gnt1;

initial begin
$monitor ("req0=%b,req1=%b,gnt0=%b,gnt1=%b", req0, req1, gnt0, gnt1);
clock = 0;
reset = 0;
req0 = 0;
req1 = 0;
#5 reset = 1;
#15 reset = 0;
#10 req0 = 1;
#10 req0 = 0;
#10 req1 = 1;
#10 req1 = 0;
#10 {req0, req1} = 2'b11;
#10 {req0, req1} = 2'b00;
#10 $finish;
end

always begin 
	#5 clock = !clock;
end

Arbiter U0
(
.clock (clock),
.reset (reset),
.req_0 (req0),
.req_1 (req1),
.gnt_0 (gnt0),
.gnt_1 (gnt1)
);

endmodule