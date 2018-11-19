#pragma once

#include "stdlib.h"
#include "time.h"
#include <cmath>
#include <iostream>
struct Complex
{
	double r = 0.0;
	double i = 0.0;
};
Complex complexAdd(Complex a,  Complex b);
Complex complexMul(Complex a, Complex b);
Complex complexSub(Complex a,  Complex b);
double getComplexModules(Complex raw);
void showComplex(Complex A);
void showComplex(Complex *A, int size);
void fillRandomComplex(Complex *x, int N);
//long get