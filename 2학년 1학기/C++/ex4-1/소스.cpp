#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "정수 입력 : ";
	cin >> number;

	if (number < 0)
	{
		number = -number;
	}

	cout << "입력한 숫자의 절대값 = " << number << endl;

	return 0;
}S