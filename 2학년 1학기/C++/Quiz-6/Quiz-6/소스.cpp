#include <iostream>
using namespace std;

int main()
{
	int i, j;
	char text = 'A';

	// ���� ģ �ڵ�
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << text;
			text++;
		}
		cout << endl;
	}

	// ������ ����
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