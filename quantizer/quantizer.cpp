#include "quantizer.h"
#include <iostream>
using namespace std;
void quantizer(short int input[64], short int output[64], Y_Cr t, factor f)
{
	const char* q_table;
	switch (t){
		case (Y) :
			switch(f){
				case(Hundred): q_table = qrom_lum_100;
						   break;
				case(EightyFive) : q_table = qrom_lum_85;
						   break;
				case(SeventyFive) : q_table = qrom_lum_75;
						   break;
				case(Fifty) : q_table = qrom_lum_50;
						   break;
			}
			break;
		case (Cr) :
			switch(f){
				case(Hundred): q_table = qrom_chr_100;
						   break;
				case(EightyFive) : q_table = qrom_chr_85;
						   break;
				case(SeventyFive) : q_table = qrom_chr_75;
						   break;
				case(Fifty) : q_table = qrom_chr_50;
						   break;
			}
			break;
	}
	quantizer_label0:for ( int i = 0; i < 64; i++)
	{
#pragma HLS PIPELINE
		int in = (int)input[i];
		short int q  = q_table[i];
		int rr = reciprocal_rom[q];
		int t = (in * rr);
		short int truc = t >> 16; 
		output[i] = truc + (((t < 0)^ 1) && (t - truc<<16));
		//cout << input[i] << ' ' << reciprocal_rom[q_table[i]] << ' ' <<  (int) q_table[i] << endl;
	}

	return;
}
