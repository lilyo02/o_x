#include <iostream>
using namespace std;

int main()
{
	int i, j, k;

	// ���� ģ �ڵ�
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

	// ������ ����
	// �ٵ� ����� �̻��ϴ�..?
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