// Testbench code here:
module testbench;

reg [2:0] Counter;
reg X;
wire Y;

initial begin
$monitor ("x=%b,y=%b,a=%b,b=%b,c=%b", X, Y, Counter[2], Counter[1], Counter[0]);
Counter = 3'b000;
X = 0;

#1 X = 0;
#1 X = 1;
#1 X = 1;
#1 X = 0;
#1 X = 1;
#1 X = 0;
#1 X = 1;
#1 X = 0; 
#1 X = 1;
#1 X = 1;
#1 X = 0;
#1 X = 1;
#1 X = 1;
#1 X = 0;
#1 X = 1;
#1 X = 0;
#1 X = 1;
#1 X = 1;
#1 X = 0;
#1 X = 1;
$finish;
end

fsm U0
(
.x (X),
.y (Y), 
.counter (Counter)
);


endmodule
