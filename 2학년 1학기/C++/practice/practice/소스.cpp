#include <iostream>
using namespace std;

int main()
{
	const int CAPACITY = 10;
	int numbers[CAPACITY];
	
	int i, size;

	do
	{
		cout << "ũ�⸦ �Է� (1~10) : ";
		cin >> size;
	} while (size < 1 || size > CAPACITY);

	cout << "10���� ���ڸ� �Է� : ";

	for (i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}
	
	cout << "�Է��� ���ڵ��� �Ųٷ� ��� : ";

	for (i = size - 1; i >= 0; i--)
	{
		cout << numbers[i] << "  ";
	}
	cout << endl;

	return 0;
}