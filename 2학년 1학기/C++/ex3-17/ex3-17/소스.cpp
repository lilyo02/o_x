#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	y += x *= 40;

	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y;

	return 0;
}