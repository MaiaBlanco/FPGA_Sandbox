module register(ridx, widx, wdata, we, clk, reset, rdata);

// Inputs:
input wire [4:0] ridx;	// Read index
input wire [4:0] widx;	// Write index
input wire [31:0] wdata;// Input data 
input wire we;			// Write enable
input wire clk;			// Clock
input wire reset;		// Reset

// Outputs: 
output wire [31:0] rdata; 

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

// Start all of the entries zeroed out.
initial begin
	resetReg;
end

// Continuously assign the read port to the selected read address
assign rdata = mem[ridx];

// Monitor for posedge clk and write as appropriate
always @ (posedge clk) begin
	if (reset) begin
		resetReg;
	end
	// Otherwise perform synchronous write of data is write is enabled
	else begin
		if (we & (widx != 32'b0)) begin
			mem[widx] <= wdata;
		end
	end
end



endmodule