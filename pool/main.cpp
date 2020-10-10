#include "pool.h"
#include <iostream>

int main()
{
	ap_int<8> feature_in[1][OUT_W*2][OUT_W*2][K];
	ap_int<8> feature_out[1][OUT_W][OUT_W][K];

	for(int i=0;i<OUT_W*2;i++)
		for(int j=0;j<OUT_W*2;j++)
			for(int k=0;k<K;k++)
				feature_in[0][i][j][k]=i*OUT_W*2+j;

	pool(feature_in,feature_out,1);

	for(int i=0;i<OUT_W;i++)
		for(int j=0;j<OUT_W;j++)
			for(int k=0;k<K;k++)
				std::cout<<"out[0]["<<i<<","<<j<<","<<k<<"]="<<feature_out[0][i][j][k]<<std::endl;
}
