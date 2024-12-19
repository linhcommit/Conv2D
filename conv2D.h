#ifndef __CONV2D_H__
#define __CONV2D_H__

#define MAX_ROW 100
#define MAX_COL 100
#define MAX_KERNEL_SIZE 5

#include <math.h>

void initializeBuffer(
    int buffer[25],
    int in_data[100][MAX_COL],
    int index_row_out, 
    int kernel_size_row, 
    int kernel_size_col
    ) ;

int calculateConvolution(
    int buffer[25],
    int kernel[10][MAX_COL],
    int kernel_size_row, 
    int kernel_size_col
    ) ;

void updateBuffer(
    int buffer[25],
    int input[100][MAX_COL],
    int index_row_out, 
    int index_col_out, 
    int kernel_size_row, 
    int kernel_size_col, 
    int col_in
    ) ;

void conv2D(
    int in_data[100][MAX_COL],
    int out_data[100][MAX_COL],
    int row_in, 
    int col_in, 
    int kernel[10][MAX_COL],
    int kernel_size_row, 
    int kernel_size_col
    ) ;

#endif
