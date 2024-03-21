#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x;

	cout << "number에 부동 소수점 값 입력 : ";
	cin >> x;

	cout << fixed << setprecision(2);
	cout << "입력된 number의 값 : " << x << endl;
	cout << "정수부 : " << (int)x << endl;
	cout << "소수부 : " << x - (int)x << endl;

	return 0;
}