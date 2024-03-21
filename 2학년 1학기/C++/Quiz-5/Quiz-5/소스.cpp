#include <iostream>
using namespace std;

int main()
{
	int i, j, k;

	// 내가 친 코드
	/* for (i = 1; i <= 5; i++)
	{
		for (k = 1; k < i; k++)
		{
			cout << " ";
		}
		for (j = 1; j <= 10; j++)
		{
			cout << "*";
		}

		cout << endl;
	} */

	// 교수님 버전
	// 근데 결과가 이상하다..?
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			cout << "*";
		}
		cout << "\n";
		for (k = 1; k = i; k++)
		{
			cout << " ";
		}
	}

	return 0;
}