#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double radius;
	double perimeter;
	double area;

	cout << "���� ������ �Է� : ";
	cin >> radius;

	perimeter = 2 * radius * PI;
	area = radius * radius * PI;

	cout << "������ : " << radius << endl;
	cout << "�ѷ� : " << perimeter << endl;
	cout << "���� : " << area << endl;
	return 0;
}