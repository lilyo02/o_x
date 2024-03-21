#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number, temp;
	int unit = 10000;

	do
	{
		cout << "음수 아닌 100,000 미만의 정수를 입력 : ";
		cin >> number;
	} while (number <= 0 || number >= 100000);

	// 내가 친 코드
	/* for (int i = 0; i < number; i++)
	{
		if (number >= unit)
		{
			temp = number / unit;
			cout << unit << "단위 : " << number / unit << endl;

			number = number - (temp * unit);
		}
		else
		{
			unit = unit / 10;
		}
	} */

	// 교수님 버전
	do
	{
		temp = number / unit;
		cout << setw(6) << right << unit << "단위 : " << temp << endl;

		number = number - (temp * unit);
		unit = unit / 10;
	} while (number > 0);

	return 0;
}