#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int sum = 0;
	int num;

	ifstream infile; // input file stream
						// ������ ���� ������ �ͼ� ���α׷��� �Է��� �� �ְ� �����ִ� Ŭ����
	infile.open("numbers.dat");
	while (infile >> num)
	{
		sum += num;
	}

	cout << "�� �� : " << sum << "\n";
	infile.close(); // infile.open�� ¦������ �������� �� ������ �ݾ��־�� �Ѵ�

	return 0;
}