#include <iostream>
using namespace std;

class Circle
{
private: // 멤버 변수 선언
	double radius;
public: // 멤버 함수 선언
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value); // 값을 변경해야 하므로 const 안 붙음?
};

double Circle::getRadius() const // 값 변경 못하게 하려고 const 지정, 클래스가 여러 개 존재할 수 있어서 Circle은 누구 것인지 이름 붙인 것
{
	return radius;
}

double Circle::getArea() const
{
	const double PI = 3.14;
	return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
	const double PI = 3.14;
	return (2 * PI * radius);
}

void Circle::setRadius(double value)
{
	radius = value;
}

int main() // 애플리케이션
{
	cout << "Circle 1 : " << endl;
	Circle circle1;
	circle1.setRadius(10.0);
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;

	cout << "Circle 2 : " << endl;
	Circle circle2;
	circle2.setRadius(20.0);
	cout << "Radius : " << circle2.getRadius() << endl;
	cout << "Area : " << circle2.getArea() << endl;
	cout << "Perimeter : " << circle2.getPerimeter() << endl << endl;

	return 0;
}