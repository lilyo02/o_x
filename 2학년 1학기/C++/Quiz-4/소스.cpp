#include <iostream>
using namespace std;

int main()
{
	int i, j, k;

	// 내가 친 코드
	/*for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 11 - i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= 11 - j; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 교수님 버전
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10 - i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}