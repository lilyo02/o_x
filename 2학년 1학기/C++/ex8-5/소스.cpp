#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	const int CAPACITY = 50;
	int numbers[CAPACITY] = { 0 };
	int size = 0;
	int sum = 0;
	double average;
	int smallest = 1000000;
	int largest = -1000000;

	inputFile.open("numFile.dat");
	if (!inputFile)
	{
		cout << "�Է������� ���� ���� ���� �߻�!" << endl;
		cout << "���α׷��� �ߴ�! "<< endl;
		return 0;
	}
	while (inputFile >> numbers[size] && size < CAPACITY)
	{
		size++;
	}
	inputFile.close();

	for (int i = 0; i < size; i++)
	{
		sum += numbers[i];
		if (numbers[i] < smallest)
		{
			smallest = numbers[i];
		}
		if (numbers[i] > largest)
		{
			largest = numbers[i];
		}
	}

	average = (double)(sum) / size;
	cout << "��Ͽ� ���ڰ� " << size;
	cout << "�� ����" << endl;
	cout << "�� �� : " << sum << endl;
	cout << "�� �� : " << average << endl;
	cout << "�ּҰ� : " << smallest << endl;
	cout << "�ִ밪 : " << largest << endl;

	return 0;
}