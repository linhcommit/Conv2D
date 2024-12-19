#include <stdio.h>
#include "conv2D.h"

int main(int argc, char **argv) {
	// Test Case 1: 5x5 input with sequential pattern, 3x3 kernel for vertical detection
	    int input1[MAX_ROW][MAX_COL] = {
	        {1, 2, 3, 4, 5},
	        {6, 7, 8, 9, 10},
	        {11, 12, 13, 14, 15},
	        {16, 17, 18, 19, 20},
	        {21, 22, 23, 24, 25}
	    };
	    int kernel1[MAX_KERNEL_SIZE][MAX_COL] = {
	        {1, 0, -1},
	        {1, 0, -1},
	        {1, 0, -1}
	    };
	    int expected1[3][3] = {
	        {-6, -6, -6},
	        {-6, -6, -6},
	        {-6, -6, -6}
	    };

	    // Test Case 2: 5x5 input with edge pattern
	    int input2[MAX_ROW][MAX_COL] = {
	            {1, 1, 1, 0, 0},
	            {0, 1, 1, 1, 0},
	            {0, 0, 1, 1, 1},
	            {0, 0, 1, 1, 0},
	            {0, 1, 1, 0, 0}
	    };
	    int kernel2[MAX_KERNEL_SIZE][MAX_COL] = {
	            {1, 0, 1},
	            {0, 1, 0},
	            {1, 0, 1}
	    };
	    int expected2[3][3] = {
	           {4, 3, 4},
	           {2, 4, 3},
	           {2, 3, 4}
	    };
	    // Test Case 3: 4x4 input with corner pattern
	    int input3[MAX_ROW][MAX_COL] = {
	        {1, 0, 0, 1},
	        {0, 1, 1, 0},
	        {0, 1, 1, 0},
	        {1, 0, 0, 1}
	    };
	    int kernel3[MAX_KERNEL_SIZE][MAX_COL] = {
	        {1, -1},
	        {-1, 1}
	    };
	    int expected3[3][3] = {
	        {2, 0, -2},
	        {0, 0, 0},
	        {-2, 0, 2}
	    };
	    // Test Case 4: 6x6 input with block pattern
	    int input4[MAX_ROW][MAX_COL] = {
	        {1, 1, 0, 0, 1, 1},
	        {1, 1, 0, 0, 1, 1},
	        {0, 0, 1, 1, 0, 0},
	        {0, 0, 1, 1, 0, 0},
	        {1, 1, 0, 0, 1, 1},
	        {1, 1, 0, 0, 1, 1}
	    };
	    int kernel4[MAX_KERNEL_SIZE][MAX_COL] = {
	        {1, -1, 1, -1},
	        {-1, 1, -1, 1},
	        {1, -1, 1, -1},
	        {-1, 1, -1, 1}
	    };
	    int expected4[3][3] = {
	        {0, 0, 0},
	        {0, 0, 0},
	        {0, 0, 0}
	    };

	    // Test Case 5: 7x7 input with gradient pattern
	    int input5[MAX_ROW][MAX_COL] = {
	        {1, 2, 3, 4, 5, 6, 7},
	        {2, 3, 4, 5, 6, 7, 1},
	        {3, 4, 5, 6, 7, 1, 2},
	        {4, 5, 6, 7, 1, 2, 3},
	        {5, 6, 7, 1, 2, 3, 4},
	        {6, 7, 1, 2, 3, 4, 5},
	        {7, 1, 2, 3, 4, 5, 6}
	    };
	    int kernel5[MAX_KERNEL_SIZE][MAX_COL] = {
	        {1, 0, 1, 0, 1},
	        {0, 1, 0, 1, 0},
	        {1, 0, 2, 0, 1},
	        {0, 1, 0, 1, 0},
	        {1, 0, 1, 0, 1}
	    };
	    int expected5[3][3] = {
	        {63, 56, 70},
	        {56, 70, 42},
	        {70, 42, 56}
	    };
    int output[MAX_ROW][MAX_COL] = {0};
    int err_cnt;

    // Test 1
    conv2D(input1, output, 5, 5, kernel1, 3, 3);
    err_cnt = 0;
    for(int i1 = 0; i1 < 3; i1++) {
        for(int j1 = 0; j1 < 3; j1++) {
            if(output[i1][j1] != expected1[i1][j1]) {
                err_cnt++;
                printf("Test 1 - Mismatch at (%d, %d): expected %d, got %d\n",
                       i1, j1, expected1[i1][j1], output[i1][j1]);
            }
        }
    }
    if(err_cnt == 0) {
        printf("Test 1 passed!\n");
    } else {
        printf("Test 1 - ERROR: %d mismatches\n", err_cnt);
    }

    // Test 2
    conv2D(input2, output, 5, 5, kernel2, 3, 3);
    err_cnt = 0;
    for(int i2 = 0; i2 < 3; i2++) {
        for(int j2 = 0; j2 < 3; j2++) {
            if(output[i2][j2] != expected2[i2][j2]) {
                err_cnt++;
                printf("Test 2 - Mismatch at (%d, %d): expected %d, got %d\n",
                       i2, j2, expected2[i2][j2], output[i2][j2]);
            }
        }
    }
    if(err_cnt == 0) {
        printf("Test 2 passed!\n");
    } else {
        printf("Test 2 - ERROR: %d mismatches\n", err_cnt);
    }

    // Test 3
    conv2D(input3, output, 4, 4, kernel3, 2, 2);
    err_cnt = 0;
    for(int i3 = 0; i3 < 3; i3++) {
        for(int j3 = 0; j3 < 3; j3++) {
            if(output[i3][j3] != expected3[i3][j3]) {
                err_cnt++;
                printf("Test 3 - Mismatch at (%d, %d): expected %d, got %d\n",
                       i3, j3, expected3[i3][j3], output[i3][j3]);
            }
        }
    }
    if(err_cnt == 0) {
        printf("Test 3 passed!\n");
    } else {
        printf("Test 3 - ERROR: %d mismatches\n", err_cnt);
    }

    // Test 4
    conv2D(input4, output, 6, 6, kernel4, 4, 4);
    err_cnt = 0;
    for(int i4 = 0; i4 < 3; i4++) {
        for(int j4 = 0; j4 < 3; j4++) {
            if(output[i4][j4] != expected4[i4][j4]) {
                err_cnt++;
                printf("Test 4 - Mismatch at (%d, %d): expected %d, got %d\n",
                       i4, j4, expected4[i4][j4], output[i4][j4]);
            }
        }
    }
    if(err_cnt == 0) {
        printf("Test 4 passed!\n");
    } else {
        printf("Test 4 - ERROR: %d mismatches\n", err_cnt);
    }

    // Test 5
    conv2D(input5, output, 7, 7, kernel5, 5, 5);
    err_cnt = 0;
    for(int i5 = 0; i5 < 3; i5++) {
        for(int j5 = 0; j5 < 3; j5++) {
            if(output[i5][j5] != expected5[i5][j5]) {
                err_cnt++;
                printf("Test 5 - Mismatch at (%d, %d): expected %d, got %d\n",
                       i5, j5, expected5[i5][j5], output[i5][j5]);
            }
        }
    }
    if(err_cnt == 0) {
        printf("Test 5 passed!\n");
    } else {
        printf("Test 5 - ERROR: %d mismatches\n", err_cnt);
    }

    return 0;
}
