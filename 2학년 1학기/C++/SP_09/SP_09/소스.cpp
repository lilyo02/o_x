#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	const int CAPACITY = 10;
	int frequency[CAPACITY] = { 0 };
	ifstream inputFile;
	int data = 0;
	int size = 0;

	inputFile.open("integerFile.dat");
	if (!inputFile)
	{
		cout << "숫자 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다" << endl;

		return 0;
	}

	while (inputFile >> data)
	{
		if (data >= 0 && data <= 9)
		{
			size++;
			frequency[data]++;
		}
	}

	inputFile.close();
	
	cout << "파일 안에 " << size << "개의 유효한 데이터가 있습니다" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << setw(3) << i << " ";

		for (int f = 1; f <= frequency[i]; f++)
		{
			cout << "*";
		}
		cout << " " << frequency[i] << endl;
	}
	return 0;
}