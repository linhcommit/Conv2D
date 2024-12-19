// ==============================================================
// File generated on Thu Dec 19 01:58:25 +0700 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "in_data"
#define AUTOTB_TVIN_in_data  "../tv/cdatafile/c.conv2D.autotvin_in_data.dat"
// wrapc file define: "out_data"
#define AUTOTB_TVOUT_out_data  "../tv/cdatafile/c.conv2D.autotvout_out_data.dat"
#define AUTOTB_TVIN_out_data  "../tv/cdatafile/c.conv2D.autotvin_out_data.dat"
// wrapc file define: "row_in"
#define AUTOTB_TVIN_row_in  "../tv/cdatafile/c.conv2D.autotvin_row_in.dat"
// wrapc file define: "col_in"
#define AUTOTB_TVIN_col_in  "../tv/cdatafile/c.conv2D.autotvin_col_in.dat"
// wrapc file define: "kernel"
#define AUTOTB_TVIN_kernel  "../tv/cdatafile/c.conv2D.autotvin_kernel.dat"
// wrapc file define: "kernel_size_row"
#define AUTOTB_TVIN_kernel_size_row  "../tv/cdatafile/c.conv2D.autotvin_kernel_size_row.dat"
// wrapc file define: "kernel_size_col"
#define AUTOTB_TVIN_kernel_size_col  "../tv/cdatafile/c.conv2D.autotvin_kernel_size_col.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "out_data"
#define AUTOTB_TVOUT_PC_out_data  "../tv/rtldatafile/rtl.conv2D.autotvout_out_data.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			in_data_depth = 0;
			out_data_depth = 0;
			row_in_depth = 0;
			col_in_depth = 0;
			kernel_depth = 0;
			kernel_size_row_depth = 0;
			kernel_size_col_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{in_data " << in_data_depth << "}\n";
			total_list << "{out_data " << out_data_depth << "}\n";
			total_list << "{row_in " << row_in_depth << "}\n";
			total_list << "{col_in " << col_in_depth << "}\n";
			total_list << "{kernel " << kernel_depth << "}\n";
			total_list << "{kernel_size_row " << kernel_size_row_depth << "}\n";
			total_list << "{kernel_size_col " << kernel_size_col_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int in_data_depth;
		int out_data_depth;
		int row_in_depth;
		int col_in_depth;
		int kernel_depth;
		int kernel_size_row_depth;
		int kernel_size_col_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void conv2D (
int in_data[100][100],
int out_data[100][100],
int row_in,
int col_in,
int kernel[10][100],
int kernel_size_row,
int kernel_size_col);

extern "C" void AESL_WRAP_conv2D (
int in_data[100][100],
int out_data[100][100],
int row_in,
int col_in,
int kernel[10][100],
int kernel_size_row,
int kernel_size_col)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "out_data"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_data, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_data, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_data, AESL_token); // data

			sc_bv<32> *out_data_pc_buffer = new sc_bv<32>[10000];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_data', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_data', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_data_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_data, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_data))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_data
				{
					// bitslice(31, 0)
					// {
						// celement: out_data(31, 0)
						// {
							sc_lv<32>* out_data_lv0_0_99_1_lv1_0_99_1 = new sc_lv<32>[10000];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out_data(31, 0)
						{
							// carray: (0) => (99) @ (1)
							for (int i_0 = 0; i_0 <= 99; i_0 += 1)
							{
								// carray: (0) => (99) @ (1)
								for (int i_1 = 0; i_1 <= 99; i_1 += 1)
								{
									if (&(out_data[0][0]) != NULL) // check the null address if the c port is array or others
									{
										out_data_lv0_0_99_1_lv1_0_99_1[hls_map_index].range(31, 0) = sc_bv<32>(out_data_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out_data(31, 0)
						{
							// carray: (0) => (99) @ (1)
							for (int i_0 = 0; i_0 <= 99; i_0 += 1)
							{
								// carray: (0) => (99) @ (1)
								for (int i_1 = 0; i_1 <= 99; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : out_data[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : out_data[0][0]
									// output_left_conversion : out_data[i_0][i_1]
									// output_type_conversion : (out_data_lv0_0_99_1_lv1_0_99_1[hls_map_index]).to_uint64()
									if (&(out_data[0][0]) != NULL) // check the null address if the c port is array or others
									{
										out_data[i_0][i_1] = (out_data_lv0_0_99_1_lv1_0_99_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_data_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "in_data"
		char* tvin_in_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_data);

		// "out_data"
		char* tvin_out_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_data);
		char* tvout_out_data = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_data);

		// "row_in"
		char* tvin_row_in = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_row_in);

		// "col_in"
		char* tvin_col_in = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_col_in);

		// "kernel"
		char* tvin_kernel = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_kernel);

		// "kernel_size_row"
		char* tvin_kernel_size_row = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_kernel_size_row);

		// "kernel_size_col"
		char* tvin_kernel_size_col = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_kernel_size_col);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_in_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_data, tvin_in_data);

		sc_bv<32>* in_data_tvin_wrapc_buffer = new sc_bv<32>[10000];

		// RTL Name: in_data
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in_data(31, 0)
				{
					// carray: (0) => (99) @ (1)
					for (int i_0 = 0; i_0 <= 99; i_0 += 1)
					{
						// carray: (0) => (99) @ (1)
						for (int i_1 = 0; i_1 <= 99; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : in_data[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in_data[0][0]
							// regulate_c_name       : in_data
							// input_type_conversion : in_data[i_0][i_1]
							if (&(in_data[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> in_data_tmp_mem;
								in_data_tmp_mem = in_data[i_0][i_1];
								in_data_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_data_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10000; i++)
		{
			sprintf(tvin_in_data, "%s\n", (in_data_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_data, tvin_in_data);
		}

		tcl_file.set_num(10000, &tcl_file.in_data_depth);
		sprintf(tvin_in_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_data, tvin_in_data);

		// release memory allocation
		delete [] in_data_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_out_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_out_data, tvin_out_data);

		sc_bv<32>* out_data_tvin_wrapc_buffer = new sc_bv<32>[10000];

		// RTL Name: out_data
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out_data(31, 0)
				{
					// carray: (0) => (99) @ (1)
					for (int i_0 = 0; i_0 <= 99; i_0 += 1)
					{
						// carray: (0) => (99) @ (1)
						for (int i_1 = 0; i_1 <= 99; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : out_data[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : out_data[0][0]
							// regulate_c_name       : out_data
							// input_type_conversion : out_data[i_0][i_1]
							if (&(out_data[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> out_data_tmp_mem;
								out_data_tmp_mem = out_data[i_0][i_1];
								out_data_tvin_wrapc_buffer[hls_map_index].range(31, 0) = out_data_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10000; i++)
		{
			sprintf(tvin_out_data, "%s\n", (out_data_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_out_data, tvin_out_data);
		}

		tcl_file.set_num(10000, &tcl_file.out_data_depth);
		sprintf(tvin_out_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_out_data, tvin_out_data);

		// release memory allocation
		delete [] out_data_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_row_in, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_row_in, tvin_row_in);

		sc_bv<32> row_in_tvin_wrapc_buffer;

		// RTL Name: row_in
		{
			// bitslice(31, 0)
			{
				// celement: row_in(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : row_in
						// sub_1st_elem          : 
						// ori_name_1st_elem     : row_in
						// regulate_c_name       : row_in
						// input_type_conversion : row_in
						if (&(row_in) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> row_in_tmp_mem;
							row_in_tmp_mem = row_in;
							row_in_tvin_wrapc_buffer.range(31, 0) = row_in_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_row_in, "%s\n", (row_in_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_row_in, tvin_row_in);
		}

		tcl_file.set_num(1, &tcl_file.row_in_depth);
		sprintf(tvin_row_in, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_row_in, tvin_row_in);

		// [[transaction]]
		sprintf(tvin_col_in, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_col_in, tvin_col_in);

		sc_bv<32> col_in_tvin_wrapc_buffer;

		// RTL Name: col_in
		{
			// bitslice(31, 0)
			{
				// celement: col_in(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : col_in
						// sub_1st_elem          : 
						// ori_name_1st_elem     : col_in
						// regulate_c_name       : col_in
						// input_type_conversion : col_in
						if (&(col_in) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> col_in_tmp_mem;
							col_in_tmp_mem = col_in;
							col_in_tvin_wrapc_buffer.range(31, 0) = col_in_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_col_in, "%s\n", (col_in_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_col_in, tvin_col_in);
		}

		tcl_file.set_num(1, &tcl_file.col_in_depth);
		sprintf(tvin_col_in, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_col_in, tvin_col_in);

		// [[transaction]]
		sprintf(tvin_kernel, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_kernel, tvin_kernel);

		sc_bv<32>* kernel_tvin_wrapc_buffer = new sc_bv<32>[1000];

		// RTL Name: kernel
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: kernel(31, 0)
				{
					// carray: (0) => (9) @ (1)
					for (int i_0 = 0; i_0 <= 9; i_0 += 1)
					{
						// carray: (0) => (99) @ (1)
						for (int i_1 = 0; i_1 <= 99; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : kernel[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : kernel[0][0]
							// regulate_c_name       : kernel
							// input_type_conversion : kernel[i_0][i_1]
							if (&(kernel[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> kernel_tmp_mem;
								kernel_tmp_mem = kernel[i_0][i_1];
								kernel_tvin_wrapc_buffer[hls_map_index].range(31, 0) = kernel_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1000; i++)
		{
			sprintf(tvin_kernel, "%s\n", (kernel_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_kernel, tvin_kernel);
		}

		tcl_file.set_num(1000, &tcl_file.kernel_depth);
		sprintf(tvin_kernel, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_kernel, tvin_kernel);

		// release memory allocation
		delete [] kernel_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_kernel_size_row, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_kernel_size_row, tvin_kernel_size_row);

		sc_bv<32> kernel_size_row_tvin_wrapc_buffer;

		// RTL Name: kernel_size_row
		{
			// bitslice(31, 0)
			{
				// celement: kernel_size_row(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : kernel_size_row
						// sub_1st_elem          : 
						// ori_name_1st_elem     : kernel_size_row
						// regulate_c_name       : kernel_size_row
						// input_type_conversion : kernel_size_row
						if (&(kernel_size_row) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> kernel_size_row_tmp_mem;
							kernel_size_row_tmp_mem = kernel_size_row;
							kernel_size_row_tvin_wrapc_buffer.range(31, 0) = kernel_size_row_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_kernel_size_row, "%s\n", (kernel_size_row_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_kernel_size_row, tvin_kernel_size_row);
		}

		tcl_file.set_num(1, &tcl_file.kernel_size_row_depth);
		sprintf(tvin_kernel_size_row, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_kernel_size_row, tvin_kernel_size_row);

		// [[transaction]]
		sprintf(tvin_kernel_size_col, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_kernel_size_col, tvin_kernel_size_col);

		sc_bv<32> kernel_size_col_tvin_wrapc_buffer;

		// RTL Name: kernel_size_col
		{
			// bitslice(31, 0)
			{
				// celement: kernel_size_col(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : kernel_size_col
						// sub_1st_elem          : 
						// ori_name_1st_elem     : kernel_size_col
						// regulate_c_name       : kernel_size_col
						// input_type_conversion : kernel_size_col
						if (&(kernel_size_col) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> kernel_size_col_tmp_mem;
							kernel_size_col_tmp_mem = kernel_size_col;
							kernel_size_col_tvin_wrapc_buffer.range(31, 0) = kernel_size_col_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_kernel_size_col, "%s\n", (kernel_size_col_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_kernel_size_col, tvin_kernel_size_col);
		}

		tcl_file.set_num(1, &tcl_file.kernel_size_col_depth);
		sprintf(tvin_kernel_size_col, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_kernel_size_col, tvin_kernel_size_col);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		conv2D(in_data, out_data, row_in, col_in, kernel, kernel_size_row, kernel_size_col);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_out_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_data, tvout_out_data);

		sc_bv<32>* out_data_tvout_wrapc_buffer = new sc_bv<32>[10000];

		// RTL Name: out_data
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out_data(31, 0)
				{
					// carray: (0) => (99) @ (1)
					for (int i_0 = 0; i_0 <= 99; i_0 += 1)
					{
						// carray: (0) => (99) @ (1)
						for (int i_1 = 0; i_1 <= 99; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : out_data[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : out_data[0][0]
							// regulate_c_name       : out_data
							// input_type_conversion : out_data[i_0][i_1]
							if (&(out_data[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> out_data_tmp_mem;
								out_data_tmp_mem = out_data[i_0][i_1];
								out_data_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_data_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10000; i++)
		{
			sprintf(tvout_out_data, "%s\n", (out_data_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_data, tvout_out_data);
		}

		tcl_file.set_num(10000, &tcl_file.out_data_depth);
		sprintf(tvout_out_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_data, tvout_out_data);

		// release memory allocation
		delete [] out_data_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "in_data"
		delete [] tvin_in_data;
		// release memory allocation: "out_data"
		delete [] tvout_out_data;
		delete [] tvin_out_data;
		// release memory allocation: "row_in"
		delete [] tvin_row_in;
		// release memory allocation: "col_in"
		delete [] tvin_col_in;
		// release memory allocation: "kernel"
		delete [] tvin_kernel;
		// release memory allocation: "kernel_size_row"
		delete [] tvin_kernel_size_row;
		// release memory allocation: "kernel_size_col"
		delete [] tvin_kernel_size_col;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

