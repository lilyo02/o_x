#include <iostream>
using namespace std;

int main()
{
	bool x = true;
	bool y = false;
	bool z = true;

	cout << "�⺻���� x�� ��� : " << x << endl;
	cout << "�⺻���� y�� ��� : " << y << endl;

	cout << "�����ڸ� ����� x�� �� : " << boolalpha << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;

	cout << "x�� �� : " << noboolalpha << x << endl;

	return 0;
}