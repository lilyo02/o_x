#include <iostream>
#include <limits>
using namespace std;

int getSize(); int size;
void process(int size); int i, number, smallest, largest;

int main()
{
	cout << " 최대값, 최소값 찾기! " << endl;
	::size = getSize();

	process(::size);

	return 0;

}

int getSize()
{
	cout << "입력할 정수 개수 (양수) : ";
	cin >> ::size;

	return ::size;
}

void process(int size)
{
	for (i = 0; i < size; i++)
	{
		cout << "정수 입력 : ";
		cin >> number;

		if (number < 0)
			continue;

		if (i == 0)
		{
			smallest = number;
			largest = number;
		}
		else
		{
			smallest = smallest < number ? smallest : number;
			largest = largest > number ? largest : number;
		}
	}

	cout << "최소값 : " << smallest << endl;
	cout << "최대값 : " << largest << endl;
}