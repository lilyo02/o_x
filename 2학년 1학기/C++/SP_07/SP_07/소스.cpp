#include <iostream>
#include <limits>
using namespace std;

int getSize(); int size;
void process(int size); int i, number, smallest, largest;

int main()
{
	cout << " �ִ밪, �ּҰ� ã��! " << endl;
	::size = getSize();

	process(::size);

	return 0;

}

int getSize()
{
	cout << "�Է��� ���� ���� (���) : ";
	cin >> ::size;

	return ::size;
}

void process(int size)
{
	for (i = 0; i < size; i++)
	{
		cout << "���� �Է� : ";
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

	cout << "�ּҰ� : " << smallest << endl;
	cout << "�ִ밪 : " << largest << endl;
}