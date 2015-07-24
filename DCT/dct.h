#ifndef __DCT_H__
#define __DCT_H__

#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "ap_int.h"

#define DW 8
#define N 64
#define NUM_TRANS 16

typedef ap_int<8> dct_data_t;

#define DCT_SIZE 8    /* defines the input matrix as 8x8 */
#define CONST_BITS  13
#define DESCALE(x,n)  (((x) + (1 << ((n)-1))) >> n)

void dct(dct_data_t input[N], dct_data_t output[N]);

#endif // __DCT_H__ not defined
