#include <iostream>
using namespace std;

int main()
{
	int i, num, mod, count;
	mod = count = 0;

	// ���� ģ �ڵ� = ������ ����
	do
	{
		cout << "���� ���� �Է� : ";
		cin >> num;
	} while (num <= 0);

	for (i = 1; i <= num; i++)
	{
		mod = num % i;

		if (mod == 0)
		{
			count++;
			// ���׷��̵�
			cout << i << " ";
		}
	}


	if (count == 2)
		cout << endl << num << "��(��) �Ҽ� �Դϴ�." << endl;
	else
		cout << endl << num << "��(��) �Ҽ��� �ƴմϴ�." << endl;

	return 0;
}