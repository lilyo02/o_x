#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	double x = 23.56;
	int y = 30;

	cout << "ĳ������ ���� �ʴ� ��� : " << x + y << endl;
	cout << "ĳ������ ���� �ʴ� ��� �ڷ��� : " << typeid (x + y).name() << endl << endl;

	cout << "ĳ������ �� ��� : " << static_cast <int> (x) + y << endl;
	// cout << "ĳ������ �� ��� : " << static_cast <int> (x + y) << endl;
	cout << "ĳ������ �� ��� �ڷ��� : " << typeid (static_cast <int> (x) + y).name() << endl;

	return 0;
}