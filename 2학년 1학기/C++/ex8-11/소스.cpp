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

	cout << "	���� ����			  ���" << endl;
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
	cout << "���� ���� ";
	for (int j = 0; j < colSize; j++)
	{
		cout << fixed << setprecision(2) << stdAvg[j] << "     ";
	}
	cout << endl;
	return 0;
}

void findStudentAverage(const int scores[][3], double stdAvg[], int rowSize, int colSize)
{
	// �л� �� ����̹Ƿ� ���� �ٲ㼭 �л��� ����� ���� ���ؾ� ��
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
	// ���� �� ����̹Ƿ� �ุ �ٲ㼭 ������ ����� ���� ���ؾ� ��
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