#include "Complex.h"

 Complex complexAdd(Complex a, Complex b)
{	
	Complex res;
	res.i = a.i + b.i;
	res.r = a.r + b.r;
	return res;
}

Complex complexSub(Complex a,Complex b) 
{
	Complex res;
	res.i = a.i - b.i;
	res.r = a.r - b.r;
	return res;
}

double getComplexModules(Complex raw)
{
	if (raw.i == 0)
		return raw.r;
	else 
		return sqrt(raw.r*raw.r + raw.i*raw.i);
}

Complex complexMul(Complex a, Complex b)
{
	Complex res;
	res.r =a.r * b.r - a.i * b.i ;
	res.i = a.r * b.i + a.i * b.r;
	return res;
}

void fillRandomComplex(Complex *x,int N)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) {
		x[i].r = (rand() % 20) / (double)(rand() % 10 + 1);
		x[i].i = (rand() % 20) / (double)(rand() % 10 + 1);
	}
}

void  showComplex(Complex A)
{
	if (A.i <0)
		std::cout << A.r <<A.i <<'i' << std::endl;
	else 
		std::cout << A.r <<"+"<< A.i << 'i'<< std::endl;

}
void showComplex(Complex *A,int size)
{
	for (int i = 0; i < size; i++)
	{
		showComplex(A[i]);
	}

}