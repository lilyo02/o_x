#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "���� �Է� : ";
	cin >> number;

	if (number < 0)
	{
		number = -number;
	}

	cout << "�Է��� ������ ���밪 = " << number << endl;

	return 0;
}S