#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num;

	cout << "���� �Է� (���� -1) : ";
	cin >> num;

	while (num != -1)
	{
		sum += num;
		cout << "���� �Է� (���� -1) : ";
		cin >> num;
	}

	cout << "�� �� : " << sum << "\n";

	return 0;
}