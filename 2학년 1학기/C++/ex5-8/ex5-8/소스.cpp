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
			cout << "ã�� ���� : " << num << "\n";
			flag = true;
		}
	}

	if (!flag)
		cout << "ã�� ���ڰ� ���� �ȿ� �������� �ʽ��ϴ�.";
	// �� ���� EOF��..!
	// ���ϴ� ���� ���� �� ����ó���� �� ��!

	infile.close();

	return 0;
}