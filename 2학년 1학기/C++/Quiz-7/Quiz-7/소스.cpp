#include <iostream>
using namespace std;

int main()
{
	int i, j, k, num;
	
	// ���� ģ �ڵ�
	/*for (i = 0; i < 5; i++)
	{
		num = 1;

		for (j = 1; j < 5 - i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= i + 1; k++)
		{
			cout << num;
			num++;
		}
		cout << endl;
	}*/

	// ������ ����
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			cout << " ";
		}
		num = 1;
		for (k = 0; k < (2 * i) + 1; k++)
		{
			cout << num;
			num++;
		}
		cout << endl;
	}

	return 0;
}