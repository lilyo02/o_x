#include "circle.h"
int main()
{
	Circle circle1(5.2);
	cout << "������ : " << circle1.getRadius() << endl;
	cout << "���� : " << circle1.getArea() << endl;
	cout << "�ѷ� : " << circle1.getPerimeter() << endl;
	cout << endl;

	Circle circle2(circle1);
	cout << "������ : " << circle2.getRadius() << endl;
	cout << "���� : " << circle2.getArea() << endl;
	cout << "�ѷ� : " << circle2.getPerimeter() << endl;
	cout << endl;

	Circle circle3;
	cout << "������ : " << circle3.getRadius() << endl;
	cout << "���� : " << circle3.getArea() << endl;
	cout << "�ѷ� : " << circle3.getPerimeter() << endl;
	cout << endl;

	return 0;
}