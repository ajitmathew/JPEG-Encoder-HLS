#include "zigzag.hpp"
void zigzag (byte_t arr[SIZE], byte_t out[SIZE])
{
#pragma HLS ARRAY_PARTITION variable=out complete dim=1
#pragma HLS ARRAY_PARTITION variable=arr complete dim=1
#pragma HLS PIPELINE
	for( int i = 0; i < SIZE; i++ )
		out[i] = arr[zz[i]];
	
}
