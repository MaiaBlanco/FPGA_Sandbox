// Double-input register (Reconfigurable Computing Lab 0 Problem 3)
// Author: Mark Blanco
// Date: 8/4/2017
module register(
	ridxA, 
	widxA, 
	wdataA, 
	weA,
	ridxB, 
	widxB, 
	wdataB,
	weB, 
	clk, 
	reset, 
	rdataA,
	rdataB
	);

// Inputs:
input wire [4:0] ridxA;	// Read index
input wire [4:0] widxA;	// Write index
input wire [31:0] wdataA;// Input data 
input wire weA;			// Write enable
input wire [4:0] ridxB;	// Read index
input wire [4:0] widxB;	// Write index
input wire [31:0] wdataB;// Input data 
input wire weB;			// Write enable
input wire clk;			// Clock
input wire reset;		// Reset

// Outputs: 
output wire [31:0] rdataA;
output wire [31:0] rdataB; 

// Internal State/Storage
reg [31:0] mem [31:0];	// 32-bit array (mem) repeated 32 times 
reg [31:0] i;			// Counter for for loop

// Helper task to reset all reg entries to 0
task resetReg;
begin
	for ( i = 0; i < 32; i = i + 1) begin
		mem[i] = 32'b0;
	end
end
endtask

task writeB;
begin
	if (widxB == 32'b0 | !weB) begin
		// Don't do anything
	end
	else begin
		mem[widxB] = wdataB;
	end
end
endtask

task writeA;
begin
	if (widxA == 32'b0 | !weA) begin
		// Don't do anything
	end
	else begin
		mem[widxA] = wdataA;
	end
end
endtask

// Start all of the entries zeroed out.
initial begin
	resetReg;
end

// Continuously assign the read port to the selected read address
assign rdataA = mem[ridxA];
assign rdataB = mem[ridxB];

// Monitor for posedge clk and write as appropriate
always @ (posedge clk) begin
	if (reset) begin
		resetReg;
	end
	// Otherwise perform synchronous write of data is write is enabled
	// Give write port B priority if both enables are asserted to the same address
	else begin
		if ((widxA == widxB) & weB) begin
			writeB;
		end
		else begin
			writeB;
			writeA;
		end
	end
end



endmodule