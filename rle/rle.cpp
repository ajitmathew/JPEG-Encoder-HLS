void entropy_encoder(short int acc, short int &amplitude, uint8_t size){
	rle_t rle_out;
	if( acc >= 0)
		rle_out.amplitude = acc;
	else


rle_t rle(short int in, Y_Cr t, uint8_t idx)
{
	short int temp = in;
	short int dc_diff;
	rle_t rle_out;
	static uint8_t zero_cnt = 0;
	short int amplitude;
	uint8_t size;
	//First DCT coeff, DC data
	if(idx == 0){
		switch(t){
			case Y1: dc_diff = temp - prev_dc_reg.Y;
					 prev_dc_reg.Y = temp;
					 entropy_coder(dc_diff, amplitude, size);
					 rle_out.runlength = 0;
					 rle_out.size = size;
					 rle_out.amplitude = amplitude;
					 break;
			case Y2: dc_diff = temp - prev_dc_reg.Y;
					 prev_dc_reg.Y = temp;
					 entropy_coder(dc_diff, amplitude, size);
					 rle_out.runlength = 0;
					 rle_out.size = size;
					 rle_out.amplitude = amplitude;
					 break;
			case Cr: dc_diff = temp - prev_dc_reg.Cr;
					 prev_dc_reg.Cr = temp;
					 entropy_coder(dc_diff, amplitude, size);
					 rle_out.runlength = 0;
					 rle_out.size = size;
					 rle_out.amplitude = amplitude;
					 break;
			case Cb: dc_diff = temp - prev_dc_reg.Y;
					 prev_dc_reg.Y = temp;
					 entropy_coder(dc_diff, amplitude, size);
					 rle_out.runlength = 0;
					 rle_out.size = size;
					 rle_out.amplitude = amplitude;
					 break;
		}
		return rle_out;
	}
	else{
		// Zero AC
		if( temp == 0 ){
			// EOB
			if( idx == 63 ){
				rle_out.runlength = 0;
				rle_out.size = 0;
				rle_out.amplitude = 0;
				return rle_out;
			}
			else
				zero_cnt++;
		}
		else{ //Non-Zero AC
			if ( zero_cnt = 15 ){


