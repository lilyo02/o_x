#include <iostream>
using namespace std;

int main()
{
	const int CAPACITY = 10;
	int numbers[CAPACITY];
	
	int i, size;

	do
	{
		cout << "크기를 입력 (1~10) : ";
		cin >> size;
	} while (size < 1 || size > CAPACITY);

	cout << "10개의 숫자를 입력 : ";

	for (i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}
	
	cout << "입력한 숫자들을 거꾸로 출력 : ";

	for (i = size - 1; i >= 0; i--)
	{
		cout << numbers[i] << "  ";
	}
	cout << endl;

	return 0;
}