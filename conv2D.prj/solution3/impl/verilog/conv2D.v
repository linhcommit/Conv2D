// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="conv2D,hls_ip_2018_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=9.634000,HLS_SYN_LAT=4846,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=5,HLS_SYN_FF=1337,HLS_SYN_LUT=1683,HLS_VERSION=2018_3}" *)

module conv2D (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_data_address0,
        in_data_ce0,
        in_data_q0,
        out_data_address0,
        out_data_ce0,
        out_data_we0,
        out_data_d0,
        row_in,
        col_in,
        kernel_address0,
        kernel_ce0,
        kernel_q0,
        kernel_size_row,
        kernel_size_col
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [13:0] in_data_address0;
output   in_data_ce0;
input  [31:0] in_data_q0;
output  [13:0] out_data_address0;
output   out_data_ce0;
output   out_data_we0;
output  [31:0] out_data_d0;
input  [31:0] row_in;
input  [31:0] col_in;
output  [9:0] kernel_address0;
output   kernel_ce0;
input  [31:0] kernel_q0;
input  [31:0] kernel_size_row;
input  [31:0] kernel_size_col;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[13:0] in_data_address0;
reg in_data_ce0;
reg out_data_ce0;
reg out_data_we0;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] tmp_s_fu_183_p2;
reg   [31:0] tmp_s_reg_274;
wire   [31:0] tmp_22_fu_195_p2;
reg   [31:0] tmp_22_reg_279;
wire   [14:0] tmp_29_fu_201_p1;
reg   [14:0] tmp_29_reg_284;
wire    ap_CS_fsm_state2;
wire   [37:0] next_mul_fu_205_p2;
reg   [37:0] next_mul_reg_289;
wire   [30:0] index_row_out_1_fu_220_p2;
reg   [30:0] index_row_out_1_reg_297;
wire   [30:0] index_col_out_1_fu_235_p2;
reg   [30:0] index_col_out_1_reg_305;
wire    ap_CS_fsm_state4;
reg   [4:0] buffer_address0;
reg    buffer_ce0;
reg    buffer_we0;
reg   [31:0] buffer_d0;
wire   [31:0] buffer_q0;
wire    grp_updateBuffer_fu_142_ap_start;
wire    grp_updateBuffer_fu_142_ap_done;
wire    grp_updateBuffer_fu_142_ap_idle;
wire    grp_updateBuffer_fu_142_ap_ready;
wire   [4:0] grp_updateBuffer_fu_142_buffer_r_address0;
wire    grp_updateBuffer_fu_142_buffer_r_ce0;
wire    grp_updateBuffer_fu_142_buffer_r_we0;
wire   [31:0] grp_updateBuffer_fu_142_buffer_r_d0;
wire   [13:0] grp_updateBuffer_fu_142_in_data_address0;
wire    grp_updateBuffer_fu_142_in_data_ce0;
wire    grp_calculateConvolution_fu_156_ap_start;
wire    grp_calculateConvolution_fu_156_ap_done;
wire    grp_calculateConvolution_fu_156_ap_idle;
wire    grp_calculateConvolution_fu_156_ap_ready;
wire   [4:0] grp_calculateConvolution_fu_156_buffer_r_address0;
wire    grp_calculateConvolution_fu_156_buffer_r_ce0;
wire   [9:0] grp_calculateConvolution_fu_156_kernel_address0;
wire    grp_calculateConvolution_fu_156_kernel_ce0;
wire   [31:0] grp_calculateConvolution_fu_156_ap_return;
wire    grp_initializeBuffer_fu_166_ap_start;
wire    grp_initializeBuffer_fu_166_ap_done;
wire    grp_initializeBuffer_fu_166_ap_idle;
wire    grp_initializeBuffer_fu_166_ap_ready;
wire   [4:0] grp_initializeBuffer_fu_166_buffer_r_address0;
wire    grp_initializeBuffer_fu_166_buffer_r_ce0;
wire    grp_initializeBuffer_fu_166_buffer_r_we0;
wire   [31:0] grp_initializeBuffer_fu_166_buffer_r_d0;
wire   [13:0] grp_initializeBuffer_fu_166_in_data_address0;
wire    grp_initializeBuffer_fu_166_in_data_ce0;
reg   [30:0] index_row_out_reg_107;
wire   [0:0] tmp_25_fu_230_p2;
reg   [37:0] phi_mul_reg_119;
reg   [30:0] index_col_out_reg_130;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state7;
reg    grp_updateBuffer_fu_142_ap_start_reg;
wire    ap_CS_fsm_state6;
reg    grp_calculateConvolution_fu_156_ap_start_reg;
wire    ap_CS_fsm_state5;
reg    grp_initializeBuffer_fu_166_ap_start_reg;
wire   [0:0] tmp_23_fu_215_p2;
wire   [63:0] tmp_30_cast_fu_250_p1;
wire   [31:0] tmp_fu_177_p2;
wire   [31:0] tmp_21_fu_189_p2;
wire   [31:0] index_row_out_cast_fu_211_p1;
wire   [31:0] index_col_out_cast_fu_226_p1;
wire   [14:0] tmp_31_fu_241_p1;
wire   [14:0] tmp_28_fu_245_p2;
reg   [6:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
#0 grp_updateBuffer_fu_142_ap_start_reg = 1'b0;
#0 grp_calculateConvolution_fu_156_ap_start_reg = 1'b0;
#0 grp_initializeBuffer_fu_166_ap_start_reg = 1'b0;
end

conv2D_buffer #(
    .DataWidth( 32 ),
    .AddressRange( 25 ),
    .AddressWidth( 5 ))
buffer_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buffer_address0),
    .ce0(buffer_ce0),
    .we0(buffer_we0),
    .d0(buffer_d0),
    .q0(buffer_q0)
);

updateBuffer grp_updateBuffer_fu_142(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_updateBuffer_fu_142_ap_start),
    .ap_done(grp_updateBuffer_fu_142_ap_done),
    .ap_idle(grp_updateBuffer_fu_142_ap_idle),
    .ap_ready(grp_updateBuffer_fu_142_ap_ready),
    .buffer_r_address0(grp_updateBuffer_fu_142_buffer_r_address0),
    .buffer_r_ce0(grp_updateBuffer_fu_142_buffer_r_ce0),
    .buffer_r_we0(grp_updateBuffer_fu_142_buffer_r_we0),
    .buffer_r_d0(grp_updateBuffer_fu_142_buffer_r_d0),
    .buffer_r_q0(buffer_q0),
    .in_data_address0(grp_updateBuffer_fu_142_in_data_address0),
    .in_data_ce0(grp_updateBuffer_fu_142_in_data_ce0),
    .in_data_q0(in_data_q0),
    .index_row_out(index_row_out_reg_107),
    .index_col_out(index_col_out_reg_130),
    .kernel_size_row(kernel_size_row),
    .kernel_size_col(kernel_size_col),
    .col_in(col_in)
);

calculateConvolution grp_calculateConvolution_fu_156(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_calculateConvolution_fu_156_ap_start),
    .ap_done(grp_calculateConvolution_fu_156_ap_done),
    .ap_idle(grp_calculateConvolution_fu_156_ap_idle),
    .ap_ready(grp_calculateConvolution_fu_156_ap_ready),
    .buffer_r_address0(grp_calculateConvolution_fu_156_buffer_r_address0),
    .buffer_r_ce0(grp_calculateConvolution_fu_156_buffer_r_ce0),
    .buffer_r_q0(buffer_q0),
    .kernel_address0(grp_calculateConvolution_fu_156_kernel_address0),
    .kernel_ce0(grp_calculateConvolution_fu_156_kernel_ce0),
    .kernel_q0(kernel_q0),
    .kernel_size_row(kernel_size_row),
    .kernel_size_col(kernel_size_col),
    .ap_return(grp_calculateConvolution_fu_156_ap_return)
);

initializeBuffer grp_initializeBuffer_fu_166(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_initializeBuffer_fu_166_ap_start),
    .ap_done(grp_initializeBuffer_fu_166_ap_done),
    .ap_idle(grp_initializeBuffer_fu_166_ap_idle),
    .ap_ready(grp_initializeBuffer_fu_166_ap_ready),
    .buffer_r_address0(grp_initializeBuffer_fu_166_buffer_r_address0),
    .buffer_r_ce0(grp_initializeBuffer_fu_166_buffer_r_ce0),
    .buffer_r_we0(grp_initializeBuffer_fu_166_buffer_r_we0),
    .buffer_r_d0(grp_initializeBuffer_fu_166_buffer_r_d0),
    .in_data_address0(grp_initializeBuffer_fu_166_in_data_address0),
    .in_data_ce0(grp_initializeBuffer_fu_166_in_data_ce0),
    .in_data_q0(in_data_q0),
    .index_row_out(index_row_out_reg_107),
    .kernel_size_row(kernel_size_row),
    .kernel_size_col(kernel_size_col)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_calculateConvolution_fu_156_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state4) & (tmp_25_fu_230_p2 == 1'd1))) begin
            grp_calculateConvolution_fu_156_ap_start_reg <= 1'b1;
        end else if ((grp_calculateConvolution_fu_156_ap_ready == 1'b1)) begin
            grp_calculateConvolution_fu_156_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_initializeBuffer_fu_166_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state2) & (tmp_23_fu_215_p2 == 1'd1))) begin
            grp_initializeBuffer_fu_166_ap_start_reg <= 1'b1;
        end else if ((grp_initializeBuffer_fu_166_ap_ready == 1'b1)) begin
            grp_initializeBuffer_fu_166_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_updateBuffer_fu_142_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state6)) begin
            grp_updateBuffer_fu_142_ap_start_reg <= 1'b1;
        end else if ((grp_updateBuffer_fu_142_ap_ready == 1'b1)) begin
            grp_updateBuffer_fu_142_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((grp_updateBuffer_fu_142_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
        index_col_out_reg_130 <= index_col_out_1_reg_305;
    end else if (((1'b1 == ap_CS_fsm_state3) & (grp_initializeBuffer_fu_166_ap_done == 1'b1))) begin
        index_col_out_reg_130 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (tmp_25_fu_230_p2 == 1'd0))) begin
        index_row_out_reg_107 <= index_row_out_1_reg_297;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        index_row_out_reg_107 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (tmp_25_fu_230_p2 == 1'd0))) begin
        phi_mul_reg_119 <= next_mul_reg_289;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_119 <= 38'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        index_col_out_1_reg_305 <= index_col_out_1_fu_235_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        index_row_out_1_reg_297 <= index_row_out_1_fu_220_p2;
        next_mul_reg_289 <= next_mul_fu_205_p2;
        tmp_29_reg_284 <= tmp_29_fu_201_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_22_reg_279 <= tmp_22_fu_195_p2;
        tmp_s_reg_274 <= tmp_s_fu_183_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_23_fu_215_p2 == 1'd0))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_23_fu_215_p2 == 1'd0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        buffer_address0 = grp_initializeBuffer_fu_166_buffer_r_address0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        buffer_address0 = grp_calculateConvolution_fu_156_buffer_r_address0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        buffer_address0 = grp_updateBuffer_fu_142_buffer_r_address0;
    end else begin
        buffer_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        buffer_ce0 = grp_initializeBuffer_fu_166_buffer_r_ce0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        buffer_ce0 = grp_calculateConvolution_fu_156_buffer_r_ce0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        buffer_ce0 = grp_updateBuffer_fu_142_buffer_r_ce0;
    end else begin
        buffer_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        buffer_d0 = grp_initializeBuffer_fu_166_buffer_r_d0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        buffer_d0 = grp_updateBuffer_fu_142_buffer_r_d0;
    end else begin
        buffer_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        buffer_we0 = grp_initializeBuffer_fu_166_buffer_r_we0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        buffer_we0 = grp_updateBuffer_fu_142_buffer_r_we0;
    end else begin
        buffer_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        in_data_address0 = grp_initializeBuffer_fu_166_in_data_address0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        in_data_address0 = grp_updateBuffer_fu_142_in_data_address0;
    end else begin
        in_data_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        in_data_ce0 = grp_initializeBuffer_fu_166_in_data_ce0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        in_data_ce0 = grp_updateBuffer_fu_142_in_data_ce0;
    end else begin
        in_data_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (grp_calculateConvolution_fu_156_ap_done == 1'b1))) begin
        out_data_ce0 = 1'b1;
    end else begin
        out_data_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (grp_calculateConvolution_fu_156_ap_done == 1'b1))) begin
        out_data_we0 = 1'b1;
    end else begin
        out_data_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_23_fu_215_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (grp_initializeBuffer_fu_166_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (tmp_25_fu_230_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (grp_calculateConvolution_fu_156_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((grp_updateBuffer_fu_142_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign grp_calculateConvolution_fu_156_ap_start = grp_calculateConvolution_fu_156_ap_start_reg;

assign grp_initializeBuffer_fu_166_ap_start = grp_initializeBuffer_fu_166_ap_start_reg;

assign grp_updateBuffer_fu_142_ap_start = grp_updateBuffer_fu_142_ap_start_reg;

assign index_col_out_1_fu_235_p2 = (index_col_out_reg_130 + 31'd1);

assign index_col_out_cast_fu_226_p1 = index_col_out_reg_130;

assign index_row_out_1_fu_220_p2 = (31'd1 + index_row_out_reg_107);

assign index_row_out_cast_fu_211_p1 = index_row_out_reg_107;

assign kernel_address0 = grp_calculateConvolution_fu_156_kernel_address0;

assign kernel_ce0 = grp_calculateConvolution_fu_156_kernel_ce0;

assign next_mul_fu_205_p2 = (38'd100 + phi_mul_reg_119);

assign out_data_address0 = tmp_30_cast_fu_250_p1;

assign out_data_d0 = grp_calculateConvolution_fu_156_ap_return;

assign tmp_21_fu_189_p2 = (col_in + 32'd1);

assign tmp_22_fu_195_p2 = (tmp_21_fu_189_p2 - kernel_size_col);

assign tmp_23_fu_215_p2 = (($signed(index_row_out_cast_fu_211_p1) < $signed(tmp_s_reg_274)) ? 1'b1 : 1'b0);

assign tmp_25_fu_230_p2 = (($signed(index_col_out_cast_fu_226_p1) < $signed(tmp_22_reg_279)) ? 1'b1 : 1'b0);

assign tmp_28_fu_245_p2 = (tmp_29_reg_284 + tmp_31_fu_241_p1);

assign tmp_29_fu_201_p1 = phi_mul_reg_119[14:0];

assign tmp_30_cast_fu_250_p1 = tmp_28_fu_245_p2;

assign tmp_31_fu_241_p1 = index_col_out_reg_130[14:0];

assign tmp_fu_177_p2 = (row_in + 32'd1);

assign tmp_s_fu_183_p2 = (tmp_fu_177_p2 - kernel_size_row);

endmodule //conv2D
