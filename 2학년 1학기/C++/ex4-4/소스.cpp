#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int larger;

	cout << "ù ��° ���� �Է� : ";
	cin >> num1;
	cout << "�� ��° ���� �Է� : ";
	cin >> num2;

	if (num1 >= num2)
	{
		larger = num1;
	}
	else
	{
		larger = num2;
	}

	cout << "�� ū ���� = " << larger << endl;

	return 0;
}