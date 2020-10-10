#ifndef __POOL_H__
#define __POOL_H__

#include "ap_fixed.h"

#define K 8
#define OUT_W 50

#define MIN(A,B) ((A<B)?A:B)
#define MAX(A,B) ((A<B)?B:A)

void pool(ap_int<8> feature_in[1][OUT_W*2][OUT_W*2][K],ap_int<8> feature_out[1][OUT_W][OUT_W][K],ap_uint<2> method);

#endif
