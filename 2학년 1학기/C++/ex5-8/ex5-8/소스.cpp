#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile;
	int num;
	bool flag;

	infile.open("numbers.dat");
	flag = false;

	while (!flag && infile >> num)
	{
		if (num >= 150)
		{
			cout << "찾는 숫자 : " << num << "\n";
			flag = true;
		}
	}

	if (!flag)
		cout << "찾는 숫자가 파일 안에 존재하지 않습니다.";
	// 이 위가 EOF다..!
	// 원하는 값이 없을 때 예외처리도 할 것!

	infile.close();

	return 0;
}