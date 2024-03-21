#include <iostream>
#include <iomanip>
using namespace std;

void findStudentAverage(const int scores[][3], double stdAvg[], int rowSize, int colSize);
void findTestAverage(const int scores[][3], double tstAvg[], int rowSize, int colSize);

int main()
{
	const int rowSize = 5;
	const int colSize = 3;
	int scores[rowSize][colSize] = { {82, 65, 72},
									 {73, 70, 80},
									 {91, 67, 40},
									 {72, 72, 68},
									 {65, 90, 80} };

	double stdAvg[rowSize];
	double tstAvg[colSize];

	findStudentAverage(scores, stdAvg, rowSize, colSize);
	findTestAverage(scores, tstAvg, rowSize, colSize);

	cout << "	시험 점수			  평균" << endl;
	cout << "	-----------------------------   --------" << endl;

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			cout << setw(12) << scores[i][j];
		}
		cout << fixed << setprecision(2) << "       " << stdAvg[i] << endl;
	}
	cout << "	--------------------------------" << endl;
	cout << "최종 점수 ";
	for (int j = 0; j < colSize; j++)
	{
		cout << fixed << setprecision(2) << stdAvg[j] << "     ";
	}
	cout << endl;
	return 0;
}

void findStudentAverage(const int scores[][3], double stdAvg[], int rowSize, int colSize)
{
	// 학생 별 평균이므로 열을 바꿔서 학생의 평균을 각각 구해야 함
	for (int i = 0; i < rowSize; i++)
	{
		int sum = 0;
		for (int j = 0; j < colSize; j++)
		{
			sum += scores[i][j];
		}
		double average = (double)(sum) / colSize;
		stdAvg[i] = average;
	}
}
void findTestAverage(const int scores[][3], double tstAvg[], int rowSize, int colSize)
{
	// 시험 별 평균이므로 행만 바꿔서 시험의 평균을 각각 구해야 함
	for (int j = 0; j < colSize; j++)
	{
		int sum = 0;
		for (int i = 0; i < rowSize; i++)
		{
			sum += scores[i][j];
		}
		double average = (double)(sum) / rowSize;
		tstAvg[j] = average;
	}
}