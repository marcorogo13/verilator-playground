module register #(parameter WIDTH = 8) (
    input clk,
    input reset_n,
    input [WIDTH-1:0] data_in,
    output reg [WIDTH-1:0] data_out
);

    always_ff @(posedge clk or negedge reset_n) begin
        if (~reset_n) begin
            data_out <= 0;
        end else begin
            data_out <= data_in;
        end
    end

endmodule
