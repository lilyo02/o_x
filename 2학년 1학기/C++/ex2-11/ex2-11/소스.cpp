#include <iostream>
using namespace std;

int main()
{
	// true�� 0�� �ƴ� ��� �� false�� 0

	bool x = 123;
	bool y = -8;
	bool z = 0;
	bool t = -0; // -0�� 0����
	bool u = true;
	bool v = false;

	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;
	cout << "t�� �� : " << t << endl;
	cout << "u�� �� : " << u << endl;
	cout << "v�� �� : " << v << endl;

	return 0;
}