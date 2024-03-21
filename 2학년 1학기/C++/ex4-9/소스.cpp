#include <iostream>
using namespace std;

int main()
{
	int year;
	bool leapYear;

	cout << "연도를 입력 : ";
	cin >> year;

	leapYear = year % 400 == 0 || (year % 4 == 0) && (year % 100 != 0);
	//leapYear = ((year % 400) == 0) || ((year % 4) == 0 && (year % 100) != 0);

	if (leapYear)
	{
		cout << year << "년은 윤년입니다." << endl;
	}
	else
	{
		cout << year << "년은 윤년이 아닙니다." << endl;
	}

	return 0;
}