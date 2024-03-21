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
		cout << "�� ���� ��¥ ���� �Է��ϼ��� (28, 29, 30, 31) : ";
		cin >> dayInMonth;
	} while (dayInMonth < 28 || dayInMonth > 31);

	do
	{
		cout << "ù ���� ������ �Է��ϼ��� (0 ~ 6) : ";
		cin >> startDay;
	} while (startDay < 0 || startDay > 6);

	cout << endl;
	cout << "Sun Mon Tue Wed Thr Fri Sat" << endl; 
	cout << "--- --- --- --- --- --- ---" << endl;

	// ���� �Է��ߴ� �ڵ�
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

	// ������ ����
	for (int space = 0; space < startDay; space++)
	{
		cout << "    ";
		col++;
	}

	for (int day = 1; day <= dayInMonth; day++)
	{
		cout << setw(3) << day << " ";
		//setw �˾ƺ� ��
		col++;
		
		if (col % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;

	return 0;
}