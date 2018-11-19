#include "fft.h"

Complex * FFT(Complex *x, int M)
{
	Complex Wn;
	int N = pow(2, M);
	Complex *A = DIT(x, M, N);
	
	int P = 0;
	int  B = 0;
	for (int L = 1; L <= M; L++) {
		B = pow(2, L - 1);
		for (int J = 0; J <= B - 1; J++) {
			P = pow(2, M - L)*J;
			for (int K = J; K <= N - 1; K = K + pow(2, L)) {
				Wn = getTwiddleFactor(N, P);
				doButterfly(&A[K], &A[K + B], &Wn);
			}
		}
	}
	return A;
}