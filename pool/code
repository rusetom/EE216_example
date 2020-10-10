#include "pool.h"

void pool(ap_int<8> feature_in[1][OUT_W*2][OUT_W*2][K],ap_int<8> feature_out[1][OUT_W][OUT_W][K],ap_uint<2> method)
{
	for(int c=0;c<1;c++)
		for(int i=0;i<OUT_W;i++)
			for(int j=0;j<OUT_W;j++)
			{
				for(int k=0;k<K;k++)
				{
					ap_int<8> dat1=feature_in[c][2*i][2*j][k];
					ap_int<8> dat2=feature_in[c][2*i][2*j+1][k];
					ap_int<8> dat3=feature_in[c][2*i+1][2*j][k];
					ap_int<8> dat4=feature_in[c][2*i+1][2*j+1][k];
					ap_int<8> result;

					if(method==0)//mean
					{
						ap_int<10> tp;
						tp=dat1+dat2+dat3+dat4;
						result=tp.range(9,2);
					}
					else
						if(method==1)//min
							result=MIN(dat1,MIN(dat2,MIN(dat3,dat4)));
						else//max
							result=MAX(dat1,MAX(dat2,MAX(dat3,dat4)));
					feature_out[c][i][j][k]=result;
				}
			}
}
