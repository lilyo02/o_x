#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double radius;
	double perimeter;
	double area;

	cout << "원의 반지름 입력 : ";
	cin >> radius;

	perimeter = 2 * radius * PI;
	area = radius * radius * PI;

	cout << "반지름 : " << radius << endl;
	cout << "둘레 : " << perimeter << endl;
	cout << "면적 : " << area << endl;
	return 0;
}