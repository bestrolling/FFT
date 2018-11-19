#include  "butterfly.h"

void doButterfly(Complex *A,Complex *B, Complex *C)
{
	Complex a, b;
	a = *A;
	b = *B;
	*B = complexMul(*C, *B);
     a = complexSub(*A, *B);
	 b = complexAdd(*A, *B);
	 *A = b;
	 *B = a;
}
Complex  getTwiddleFactor(int N,int P)
{
	Complex res;
		res.r = cos(2 * Pi* P/ N);
		res.i = -sin(2 * Pi*P / N);		
	return res;
}


/*void doButterfly(Complex *A, Complex *B, Complex *C)
{
	Complex a, b;
	*B = complexMul(*C, *B);
	*B = complexSub(*A, *B);
	*A  = complexAdd(*A, *B);
}*/