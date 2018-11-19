#include "dit.h"
int getReverse(int proper_order,int power)
{
	int last_bit = 0;
	int res = 0;
	for (int i = 0; i < power; i++){	
		last_bit = proper_order & 1;
		res <<= 1; 
		res = res | last_bit; 
		proper_order >>= 1;
	}
	
	return res;
}
Complex* DIT( Complex *x, int M,int N)
{
	Complex *A = new Complex[N];
	for (int i = 0; i < N; i++) {
		A[i] = x[getReverse(i, M)];
	}
	return A;
}