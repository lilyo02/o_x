#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number, temp;
	int unit = 10000;

	do
	{
		cout << "���� �ƴ� 100,000 �̸��� ������ �Է� : ";
		cin >> number;
	} while (number <= 0 || number >= 100000);

	// ���� ģ �ڵ�
	/* for (int i = 0; i < number; i++)
	{
		if (number >= unit)
		{
			temp = number / unit;
			cout << unit << "���� : " << number / unit << endl;

			number = number - (temp * unit);
		}
		else
		{
			unit = unit / 10;
		}
	} */

	// ������ ����
	do
	{
		temp = number / unit;
		cout << setw(6) << right << unit << "���� : " << temp << endl;

		number = number - (temp * unit);
		unit = unit / 10;
	} while (number > 0);

	return 0;
}