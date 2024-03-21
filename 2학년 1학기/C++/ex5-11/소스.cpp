#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int startDay;
	int dayInMonth;
	int col = 0;

	do
	{
		cout << "한 달의 날짜 수를 입력하세요 (28, 29, 30, 31) : ";
		cin >> dayInMonth;
	} while (dayInMonth < 28 || dayInMonth > 31);

	do
	{
		cout << "첫 날의 요일을 입력하세요 (0 ~ 6) : ";
		cin >> startDay;
	} while (startDay < 0 || startDay > 6);

	cout << endl;
	cout << "Sun Mon Tue Wed Thr Fri Sat" << endl; 
	cout << "--- --- --- --- --- --- ---" << endl;

	// 내가 입력했던 코드
	/* for (int i = 0; i <= startDay; i++)
	{
		cout << "    ";
		col++;
	}

	for (int j = 1; j <= dayInMonth; j++)
	{
		cout << j;
		col++;

		if (col % 7 == 0)
		{
			cout << "\n";
		}
	}
	*/

	// 교수님 버전
	for (int space = 0; space < startDay; space++)
	{
		cout << "    ";
		col++;
	}

	for (int day = 1; day <= dayInMonth; day++)
	{
		cout << setw(3) << day << " ";
		//setw 알아볼 것
		col++;
		
		if (col % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;

	return 0;
}