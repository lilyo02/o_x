#include<iostream>
using namespace std;

int main()
{
	int num1, int num2;
	int max = 0;

	cout << "ù ��° ���� �Է� : ";
	cin >> num1;
	cout << "�� ��° ���� �Է� : ";
	cin >> num2;

	max = num1 > num2 ? num1 : num2;

	cout << "�� ū ���� : " << max;

	return 0;
}