struct rle_t {
	uint8_t runlength;
	uint8_t size;
	short int amplitude;
};

enum Y_Cr {Y1, Y2, Cr, Cb};

struct prev_dc_t{
	short int Y;
	short int Cr;
	short int Cb;
};

prev_dc_t prev_dc_reg = { 0, 0, 0};
void rle_init(){
