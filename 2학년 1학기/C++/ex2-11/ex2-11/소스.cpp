#include <iostream>
using namespace std;

int main()
{
	// true는 0이 아닌 모든 수 false는 0

	bool x = 123;
	bool y = -8;
	bool z = 0;
	bool t = -0; // -0도 0으로
	bool u = true;
	bool v = false;

	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
	cout << "t의 값 : " << t << endl;
	cout << "u의 값 : " << u << endl;
	cout << "v의 값 : " << v << endl;

	return 0;
}