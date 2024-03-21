#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int sum = 0;
	int num;

	ifstream infile; // input file stream
						// 파일의 값을 가지고 와서 프로그램에 입력할 수 있게 도와주는 클래스
	infile.open("numbers.dat");
	while (infile >> num)
	{
		sum += num;
	}

	cout << "총 합 : " << sum << "\n";
	infile.close(); // infile.open과 짝궁으로 마지막엔 꼭 파일을 닫아주어야 한다

	return 0;
}