#include <iostream>
using namespace std;

class Circle
{
private:
	double radius;
public :
	Circle(double radius);			// 매개변수 생성자
	Circle();						// 기본 생성자
	~Circle();						// 소멸자
	Circle(const Circle& circle);	// 복사 생성자
	void setRadius(double radius);	// 설정자
	double getRadius() const;		// 멤버함수
	double getArea() const;			// 멤버함수
	double getPerimeter() const;	// 멤버함수
};

Circle::Circle(double rds) : radius(rds)
{
	cout << "매개변수가 있는 생성자가 호출되었음." << endl;
}
Circle::Circle() : radius(1.0)
{
	cout << "기본 생성자가 호출되었음." << endl;
}
Circle::Circle(const Circle& circle) : radius(circle.radius)
{
	cout << "복사 생성자가 호출되었음." << endl;
}
Circle::~Circle()
{
	cout << "소멸자가 호출되었음!" << radius;
	cout << endl;
}

void Circle::setRadius(double value)
{
	radius = value;
}
double Circle::getRadius() const
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

int main()
{
	Circle circle1(5.2);
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;

	Circle circle2(circle1);
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;

	Circle circle3;
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;

	return 0;
}