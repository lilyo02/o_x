#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int i, select, count;
	int num;
	srand(time(0));

	do
	{
		cout << "�ζ� ������ �����մϴ�." << endl;
		cout << "�� ������ �ұ��? : ";
		cin >> select;

		if (select == 0)
			break;

	} while (select < 0);

	for (count = 0; count < select; count++)
	{
		for (i = 0; i < 6; i++)
		{
			num = rand() % 45 + 1;
			cout << setw(4) << num;
		}
		cout << endl;
	}

	return 0;
}