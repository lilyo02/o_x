#include <iostream>
using namespace std;
int max(int fst, int snd, int trd);
int min(int fst, int snd, int trd);
int main()
{
	int first, second, third;

	cout << "ù ��° ���� �Է� : ";
	cin >> first;
	cout << "�� ��° ���� �Է� : ";
	cin >> second;
	cout << "�� ��° ���� �Է� : ";
	cin >> third;

	
	cout << endl << "�� �� �� ū �� = " << max(first, second, third) << endl;
	cout << "�� �� �� ���� �� = " << min(first, second, third) << endl;

	return 0;
}

int max(int fst, int snd, int trd)
{
	int max;
	
	max = fst > snd ? fst : snd;
	max = max > trd ? max : trd;

	return max;
}

int min(int fst, int snd, int trd)
{
	int min;

	min = fst < snd ? fst : snd;
	min = min < trd ? min : trd;

	return min;
}