#include <iostream>
using namespace std;

int main()
{
	int year;
	bool leapYear;

	cout << "������ �Է� : ";
	cin >> year;

	leapYear = year % 400 == 0 || (year % 4 == 0) && (year % 100 != 0);
	//leapYear = ((year % 400) == 0) || ((year % 4) == 0 && (year % 100) != 0);

	if (leapYear)
	{
		cout << year << "���� �����Դϴ�." << endl;
	}
	else
	{
		cout << year << "���� ������ �ƴմϴ�." << endl;
	}

	return 0;
}