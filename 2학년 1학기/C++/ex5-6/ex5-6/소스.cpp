#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num;

	cout << "ù ��° ���� �Է� (���� EOF) : ";

	while (cin >> num)
	{
		sum += num;
		cout << "���� ���� �Է� : ";
	}

	cout << "�� �� : " << sum << "\n";

	return 0;
}