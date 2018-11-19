#include "paint.h"
#include "fft.h"
void showPaint(Complex * data, int num,int frame)
{
	
	int M = frame, N = 600;
	int space = 1;
	int x = 2;
	COLORREF colorrrefRGB = RGB(120, 250, 110);
	initgraph(M, N);
	setorigin(0, N/2);
	setaspectratio(1, -1);
	Complex *buf = new Complex;
	line(0, N/2, M, N/2);
	setlinecolor(colorrrefRGB);
	for (int i = 0; i <num/frame; i++)
	{
		buf = FFT(data,11);
		BeginBatchDraw();
		for (int j = 0; j < frame; j++) {
			putpixel( x, buf[j].r, colorrrefRGB);
			line(x, 0, x, buf[j].r);
			colorrrefRGB = RGB(rand() % 255, rand() % 255, rand() % 255);
			setlinecolor(colorrrefRGB);
			x = x + space;
		}
		x = 2;
		EndBatchDraw();
		Sleep(5);
		cleardevice();
		data+= frame;
	}
	delete buf;

	//closegraph();
}
