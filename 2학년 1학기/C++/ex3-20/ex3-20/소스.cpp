#include <iostream>
#include <limits>
using namespace std;

int main()
{
	double num1 = +numeric_limits <double> ::max();
	double num2 = -numeric_limits <double> ::max();

	cout << "double�� �ִ밪 : " << num1 << endl;
	cout << "double�� �ּҰ� : " << num2 << endl;

	num1 *= 1000.00;
	num2 *= 1000.00;

	cout << "overflow�� �Ͼ num1 * 1000�� �� : " << num1 << endl;
	cout << "underflow�� �Ͼ num2 * 1000�� �� : " << num2 << endl;

	return 0;
}