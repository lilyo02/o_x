#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "ù ��° ���� �Է� : ";
	cin >> num1;
	cout << "�� ��° ���� �Է� : ";
	cin >> num2;

	if (num1 >= num2)
	{
		if (num1 > num2)
		{
			cout << num1 << " > " << num2;
		}
		else
		{
			cout << num1 << " == " << num2;
		}
	}
	else
	{
		cout << num1 << " < " << num2 << endl;
	}

	return 0;
}