#include <iostream>
using namespace std;

int main()
{
	int num, count, sum;
	count = sum = 0;

	cout << "���� ���� 5���� ���� ������!!" << endl;

	// ���� ģ �ڵ�
	do
	{
		cout << "���� ���� �Է� : ";
		cin >> num;
		
		if (num > 0)
		{
			sum += num;
			count++;
		}
		else
		{
			cout << "*";
			continue;
		}

	} while (count < 5);

	cout << "���� ���� ���� : " << sum << endl;

	// ������ ����
	while (count < 5)
	{
		cout << "���� ���� �Է� : ";
		cin >> num;

		if (num <= 0)
		{
			cout << "��";
			continue;
		}
		sum += num;
		count++;
	}

	cout << "���� ���� ���� : " << sum;

	return 0;
}