// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module calculateConvolution (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        buffer_r_address0,
        buffer_r_ce0,
        buffer_r_q0,
        kernel_address0,
        kernel_ce0,
        kernel_q0,
        kernel_size_row,
        kernel_size_col,
        ap_return
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] buffer_r_address0;
output   buffer_r_ce0;
input  [31:0] buffer_r_q0;
output  [9:0] kernel_address0;
output   kernel_ce0;
input  [31:0] kernel_q0;
input  [31:0] kernel_size_row;
input  [31:0] kernel_size_col;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[4:0] buffer_r_address0;
reg buffer_r_ce0;
reg[9:0] kernel_address0;
reg kernel_ce0;
reg[31:0] ap_return;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg  signed [31:0] reg_197;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state7;
reg  signed [31:0] reg_201;
wire   [31:0] grp_fu_205_p2;
reg   [31:0] reg_211;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state8;
wire   [10:0] tmp_47_fu_215_p1;
reg   [10:0] tmp_47_reg_417;
wire    ap_CS_fsm_state2;
wire   [37:0] next_mul2_fu_219_p2;
reg   [37:0] next_mul2_reg_423;
wire   [31:0] next_mul_fu_225_p2;
reg   [31:0] next_mul_reg_428;
wire   [30:0] ik_row_3_fu_239_p2;
reg   [30:0] ik_row_3_reg_436;
wire   [31:0] tmp_53_fu_312_p3;
reg   [31:0] tmp_53_reg_441;
wire   [0:0] tmp_fu_234_p2;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_54_fu_320_p2;
wire   [31:0] sum_2_fu_350_p2;
reg   [31:0] sum_2_reg_459;
wire    ap_CS_fsm_state6;
wire   [0:0] tmp_28_1_fu_362_p2;
wire   [31:0] ik_col_3_1_fu_392_p2;
reg   [31:0] ik_col_3_1_reg_478;
wire   [31:0] sum_2_1_fu_398_p2;
wire    ap_CS_fsm_state9;
reg   [31:0] sum_reg_116;
wire    ap_CS_fsm_state10;
reg   [30:0] ik_row_reg_128;
reg   [31:0] phi_mul_reg_139;
reg   [37:0] phi_mul1_reg_151;
reg   [31:0] sum_1_reg_162;
reg   [31:0] ik_col_reg_173;
reg   [31:0] sum_1_lcssa_reg_185;
wire  signed [63:0] tmp_25_fu_331_p1;
wire   [63:0] tmp_29_cast_fu_345_p1;
wire  signed [63:0] tmp_30_1_fu_373_p1;
wire   [63:0] tmp_30_cast_fu_387_p1;
wire   [31:0] ik_row_cast_fu_230_p1;
wire   [31:0] kernel_size_col_op_o_fu_252_p2;
wire   [31:0] p_neg_fu_265_p2;
wire   [30:0] p_lshr_fu_270_p4;
wire   [0:0] tmp_49_fu_257_p3;
wire   [30:0] p_neg_t_fu_280_p2;
wire   [30:0] tmp_50_fu_286_p4;
wire   [0:0] tmp_48_fu_245_p3;
wire   [30:0] tmp_51_fu_296_p3;
wire   [30:0] tmp_52_fu_304_p3;
wire   [31:0] tmp_24_fu_325_p2;
wire   [10:0] tmp_55_fu_336_p1;
wire   [10:0] tmp_s_fu_340_p2;
wire   [31:0] ik_col_3_s_fu_356_p2;
wire   [31:0] tmp_29_1_fu_367_p2;
wire   [10:0] tmp_56_fu_378_p1;
wire   [10:0] tmp_28_fu_382_p2;
reg   [31:0] ap_return_preg;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 ap_return_preg = 32'd0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_preg <= 32'd0;
    end else begin
        if (((tmp_fu_234_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_return_preg <= sum_reg_116;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ik_col_reg_173 <= ik_col_3_1_reg_478;
    end else if (((tmp_fu_234_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ik_col_reg_173 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        ik_row_reg_128 <= ik_row_3_reg_436;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ik_row_reg_128 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        phi_mul1_reg_151 <= next_mul2_reg_423;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul1_reg_151 <= 38'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        phi_mul_reg_139 <= next_mul_reg_428;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_139 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (tmp_28_1_fu_362_p2 == 1'd0))) begin
        sum_1_lcssa_reg_185 <= sum_2_fu_350_p2;
    end else if (((tmp_54_fu_320_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        sum_1_lcssa_reg_185 <= sum_1_reg_162;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        sum_1_reg_162 <= sum_2_1_fu_398_p2;
    end else if (((tmp_fu_234_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        sum_1_reg_162 <= sum_reg_116;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        sum_reg_116 <= sum_1_lcssa_reg_185;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        sum_reg_116 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_28_1_fu_362_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        ik_col_3_1_reg_478 <= ik_col_3_1_fu_392_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ik_row_3_reg_436 <= ik_row_3_fu_239_p2;
        next_mul2_reg_423 <= next_mul2_fu_219_p2;
        next_mul_reg_428 <= next_mul_fu_225_p2;
        tmp_47_reg_417 <= tmp_47_fu_215_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_197 <= buffer_r_q0;
        reg_201 <= kernel_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5))) begin
        reg_211 <= grp_fu_205_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sum_2_reg_459 <= sum_2_fu_350_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_234_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_53_reg_441[31 : 1] <= tmp_53_fu_312_p3[31 : 1];
    end
end

always @ (*) begin
    if ((((tmp_fu_234_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((tmp_fu_234_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_fu_234_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_return = sum_reg_116;
    end else begin
        ap_return = ap_return_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        buffer_r_address0 = tmp_30_1_fu_373_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        buffer_r_address0 = tmp_25_fu_331_p1;
    end else begin
        buffer_r_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state3))) begin
        buffer_r_ce0 = 1'b1;
    end else begin
        buffer_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        kernel_address0 = tmp_30_cast_fu_387_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        kernel_address0 = tmp_29_cast_fu_345_p1;
    end else begin
        kernel_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state3))) begin
        kernel_ce0 = 1'b1;
    end else begin
        kernel_ce0 = 1'b0;
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
            if (((tmp_fu_234_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_54_fu_320_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (tmp_28_1_fu_362_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign grp_fu_205_p2 = ($signed(reg_201) * $signed(reg_197));

assign ik_col_3_1_fu_392_p2 = (32'd2 + ik_col_reg_173);

assign ik_col_3_s_fu_356_p2 = (ik_col_reg_173 | 32'd1);

assign ik_row_3_fu_239_p2 = (31'd1 + ik_row_reg_128);

assign ik_row_cast_fu_230_p1 = ik_row_reg_128;

assign kernel_size_col_op_o_fu_252_p2 = (kernel_size_col + 32'd1);

assign next_mul2_fu_219_p2 = (38'd100 + phi_mul1_reg_151);

assign next_mul_fu_225_p2 = (phi_mul_reg_139 + kernel_size_col);

assign p_lshr_fu_270_p4 = {{p_neg_fu_265_p2[31:1]}};

assign p_neg_fu_265_p2 = (kernel_size_col ^ 32'd4294967295);

assign p_neg_t_fu_280_p2 = (31'd0 - p_lshr_fu_270_p4);

assign sum_2_1_fu_398_p2 = (reg_211 + sum_2_reg_459);

assign sum_2_fu_350_p2 = (reg_211 + sum_1_reg_162);

assign tmp_24_fu_325_p2 = (ik_col_reg_173 + phi_mul_reg_139);

assign tmp_25_fu_331_p1 = $signed(tmp_24_fu_325_p2);

assign tmp_28_1_fu_362_p2 = (($signed(ik_col_3_s_fu_356_p2) < $signed(kernel_size_col)) ? 1'b1 : 1'b0);

assign tmp_28_fu_382_p2 = (tmp_47_reg_417 + tmp_56_fu_378_p1);

assign tmp_29_1_fu_367_p2 = (ik_col_3_s_fu_356_p2 + phi_mul_reg_139);

assign tmp_29_cast_fu_345_p1 = tmp_s_fu_340_p2;

assign tmp_30_1_fu_373_p1 = $signed(tmp_29_1_fu_367_p2);

assign tmp_30_cast_fu_387_p1 = tmp_28_fu_382_p2;

assign tmp_47_fu_215_p1 = phi_mul1_reg_151[10:0];

assign tmp_48_fu_245_p3 = kernel_size_col[32'd31];

assign tmp_49_fu_257_p3 = kernel_size_col_op_o_fu_252_p2[32'd31];

assign tmp_50_fu_286_p4 = {{kernel_size_col_op_o_fu_252_p2[31:1]}};

assign tmp_51_fu_296_p3 = ((tmp_49_fu_257_p3[0:0] === 1'b1) ? p_neg_t_fu_280_p2 : tmp_50_fu_286_p4);

assign tmp_52_fu_304_p3 = ((tmp_48_fu_245_p3[0:0] === 1'b1) ? 31'd0 : tmp_51_fu_296_p3);

assign tmp_53_fu_312_p3 = {{tmp_52_fu_304_p3}, {1'd0}};

assign tmp_54_fu_320_p2 = ((ik_col_reg_173 == tmp_53_reg_441) ? 1'b1 : 1'b0);

assign tmp_55_fu_336_p1 = ik_col_reg_173[10:0];

assign tmp_56_fu_378_p1 = ik_col_3_s_fu_356_p2[10:0];

assign tmp_fu_234_p2 = (($signed(ik_row_cast_fu_230_p1) < $signed(kernel_size_row)) ? 1'b1 : 1'b0);

assign tmp_s_fu_340_p2 = (tmp_47_reg_417 + tmp_55_fu_336_p1);

always @ (posedge ap_clk) begin
    tmp_53_reg_441[0] <= 1'b0;
end

endmodule //calculateConvolution