#include <iostream>
using namespace std;
int main()
{
	int numberOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month;

	do
	{
		cout << "���� �Է����ּ���(1 ~ 12) : ";
		cin >> month;
	} while (month < 1 || month > 12);

	cout << "�ش� ������ " << numberOfDays[month];
	cout << "���� ���� �ֽ��ϴ�" << endl;

	return 0;
}