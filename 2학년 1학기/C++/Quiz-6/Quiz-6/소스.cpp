#include <iostream>
using namespace std;

int main()
{
	int i, j;
	char text = 'A';

	// 내가 친 코드
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << text;
			text++;
		}
		cout << endl;
	}

	// 교수님 버전
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << text;
			text++;
		}
		cout << "\n";
	}

	return 0;
}