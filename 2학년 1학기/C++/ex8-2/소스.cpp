#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int CAPACITY = 50;
	int numbers[CAPACITY] = { 0 };
	int size = 0;
	ifstream inputFile;
	ofstream outputFile;

	inputFile.open("inFile.dat");
	if (!inputFile)
	{
		cout << "������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ߴ��մϴ�." << endl;
		return 0;
	}

	while (inputFile >> numbers[size] && size < CAPACITY)
	{
		size++;
	}

	inputFile.close();

	outputFile.open("outFile.dat");
	if (!outputFile)
	{
		cout << "������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ߴ��մϴ�." << endl;
		return 0;
	}

	for (int i = size - 1; i >= 0; i--)
	{
		outputFile << numbers[i] << " ";
	}
	outputFile.close();

	return 0;
}