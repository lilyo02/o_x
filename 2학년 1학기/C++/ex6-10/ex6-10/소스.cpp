#include <iostream>
using namespace std;
int getData();
int main()
{
	int number = getData(); // �Ű��������� �Լ� ȣ��
	cout << "���� �������� ���� = " << number % 10;
	
	return 0;
}

int getData()
{
	int data;
	do
	{
		cout << "���� ���� �Է� : ";
		cin >> data;
	} while (data <= 0);

	return data;
}