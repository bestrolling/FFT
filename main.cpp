#pragma comment(lib,"WinMM.Lib")
#include "main.h"
int M =1024;
int frame = 256;
int main()
{
	AudioFile<double> audioFile;
	char *filePath = new char;//C:\\Users\\MACHENIKE\\Desktop\\wav_stereo_8bit_44100.wav
	InputBox(filePath, 100, "请输入文件路径");
	audioFile.load(filePath);
	int channel = 0;
	int numSamples = audioFile.getNumSamplesPerChannel();
	audioFile.setSampleRate(2048);
	//	audioFile.printSummary();
	
	Complex *currentSampl = new Complex[numSamples];
	int j = 0;
	int i = 0;
	PlaySound(filePath, NULL, SND_FILENAME | SND_ASYNC);

	for (i = 0; i < numSamples; i++)
	{
		currentSampl[i].r= audioFile.samples[channel][j]*8;
		j = j ++;
		//std::cout << currentSample << ", ";
	}	
	showPaint(currentSampl, i, 2048);
	closegraph();
	/*delete currentSampl;
	currentSampl = NULL;
	delete filePath;
	filePath = NULL;*/
	getchar();
	return 0;
}





//int *data = new int[1024];
//showPaint(data, 1024,256);
/*double time = 0;
double counts = 0;
LARGE_INTEGER nFreq;
LARGE_INTEGER nBeginTime;
LARGE_INTEGER nEndTime;
std::cout << "请输入M:" << std::endl;
std::cin >> M;
getchar();
int N = pow(2, M);
Complex *x = new Complex[N] ;
std::cout << "随机序列为:\n";
fillRandomComplex(x, N);
//showComplex(x, N);
std::cout << "\n\n\n";
QueryPerformanceFrequency(&nFreq);
QueryPerformanceCounter(&nBeginTime);
x = FFT(x, M);
QueryPerformanceCounter(&nEndTime);
time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;
std::cout << "该随机序列频谱为:\n";
//showComplex(x, N);
std::cout <<"FTT耗费时间为:" <<time*1000<<"ms\n";*/






