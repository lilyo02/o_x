#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

int setGame();
void lottery(int n, int lotto[]);
void lotto_check(int lotto[]);
void BubbleSort(int n[]);
const int SIZE = 6;

int main()
{
	int n;
	int lotto[SIZE] = { 0 };
	srand(time(0));
	n = setGame();
	lottery(n, lotto);
}
int setGame()
{
	int num;
	cout << "�ڷζ� ��ȣ �������" << endl;
	do
	{
		cout << "�ζ� ���� Ƚ�� �Է� : ";
		cin >> num;
	} while (num <= 0);
	return num;
}
void lottery(int n, int lotto[])
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			lotto[j] = rand() % 45 + 1;
		}

		lotto_check(lotto);
		cout << "set " << i << ": ";
		
		for (j = 0; j < SIZE; j++)
		{
			cout << setw(3) << lotto[j];
		}
		cout << endl;
	}
}
void lotto_check(int lotto[])
{
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (lotto[i] == lotto[j])
			{
				lotto[i] = rand() % 45 + 1;
				i--;
				break;
			}
		}
	}

	BubbleSort(lotto);
}
void BubbleSort(int n[])
{
	int i, j, temp;
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (j = 1; j < SIZE - i; j++)
		{
			if (n[j - 1] > n[j])
			{
				temp = n[j - 1];
				n[j - 1] = n[j];
				n[j] = temp;
			}
		}
	}
	
}