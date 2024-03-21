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
		cout << "입력파일을 여는 동안 문제 발생!" << endl;
		cout << "프로그램을 중단! "<< endl;
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
	cout << "목록에 숫자가 " << size;
	cout << "개 있음" << endl;
	cout << "합 계 : " << sum << endl;
	cout << "평 균 : " << average << endl;
	cout << "최소값 : " << smallest << endl;
	cout << "최대값 : " << largest << endl;

	return 0;
}