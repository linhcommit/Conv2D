#include "conv2D.h"

// Initialize buffer
void initializeBuffer(
    int buffer[25],
    int in_data[100][MAX_COL],
    int index_row_out, 
    int kernel_size_row, 
    int kernel_size_col
    ) 
{
    int i_buffer = 0;

Initialize_Buffer_Outer_Loop:
    for(int ik_row = 0; ik_row < kernel_size_row; ik_row++) {
		#pragma HLS LOOP_TRIPCOUNT min=1 max=10
Initialize_Buffer_Inner_Loop:
        for(int ik_col = 0; ik_col < kernel_size_col; ik_col++) {
			#pragma HLS LOOP_TRIPCOUNT min=1 max=10
            buffer[i_buffer++] = in_data[index_row_out + ik_row][ik_col];
        }
    }
}

// Calculate convolution
int calculateConvolution(
    int buffer[25],
    int kernel[10][MAX_COL],
    int kernel_size_row, 
    int kernel_size_col
    ) 
{
    int sum = 0;

Cal_Outer_Loop:
    for(int ik_row = 0; ik_row < kernel_size_row; ik_row++) {
		#pragma HLS LOOP_TRIPCOUNT min=1 max=10
Cal_Inner_Loop:
        for(int ik_col = 0; ik_col < kernel_size_col; ik_col++) {
			#pragma HLS LOOP_TRIPCOUNT min=1 max=10
            sum += buffer[ik_row * kernel_size_col + ik_col] * kernel[ik_row][ik_col];
        }
    }
    return sum;
}

// Update buffer
void updateBuffer(
    int buffer[25],
    int in_data[100][MAX_COL],
    int index_row_out, 
    int index_col_out, 
    int kernel_size_row, 
    int kernel_size_col, 
    int col_in
    ) 
{
Update_Buffer_Outer_Loop:
    for(int ik_row = 0; ik_row < kernel_size_row; ik_row++) {
		#pragma HLS LOOP_TRIPCOUNT min=1 max=10
Update_Buffer_Inner_Loop:
        for(int ik_col = 0; ik_col < kernel_size_col - 1; ik_col++) {
			#pragma HLS LOOP_TRIPCOUNT min=1 max=10
            buffer[ik_row * kernel_size_col + ik_col] = buffer[ik_row * kernel_size_col + ik_col + 1];
        }

        // Update the last column only if within bounds
        if(index_col_out + kernel_size_col < col_in) {
            buffer[ik_row * kernel_size_col + kernel_size_col - 1] = 
                in_data[index_row_out + ik_row][index_col_out + kernel_size_col];
        }
    }
}

// Main conv2D function
// The top-level function
void conv2D(
    int in_data[100][MAX_COL],
    int out_data[100][MAX_COL],
    int row_in, 
    int col_in, 
    int kernel[10][MAX_COL],
    int kernel_size_row, 
    int kernel_size_col
    ) 
{
    int buffer[MAX_KERNEL_SIZE * MAX_KERNEL_SIZE]; // Static allocation for HLS

Output_Row:
    for(int index_row_out = 0; index_row_out < row_in - kernel_size_row + 1; index_row_out++) {
        #pragma HLS LOOP_TRIPCOUNT min=1 max=10

        // Initiate the first buffer
        initializeBuffer(buffer, in_data, index_row_out, kernel_size_row, kernel_size_col);

Output_Col:
        for(int index_col_out = 0; index_col_out < col_in - kernel_size_col + 1; index_col_out++) {
            #pragma HLS LOOP_TRIPCOUNT min=1 max=10

            // Calculate Conv2D
            int sum = calculateConvolution(buffer, kernel, kernel_size_row, kernel_size_col);

            // Assign Sum for Output Element
            out_data[index_row_out][index_col_out] = sum;

            // Update Buffer to Calculate the next output element
            updateBuffer(buffer, in_data, index_row_out, index_col_out, kernel_size_row, kernel_size_col, col_in);
        }
    }
}
