#include <iostream>
using namespace std;

class Circle
{
private:
	double radius;
public :
	Circle(double radius);			// �Ű����� ������
	Circle();						// �⺻ ������
	~Circle();						// �Ҹ���
	Circle(const Circle& circle);	// ���� ������
	void setRadius(double radius);	// ������
	double getRadius() const;		// ����Լ�
	double getArea() const;			// ����Լ�
	double getPerimeter() const;	// ����Լ�
};

Circle::Circle(double rds) : radius(rds)
{
	cout << "�Ű������� �ִ� �����ڰ� ȣ��Ǿ���." << endl;
}
Circle::Circle() : radius(1.0)
{
	cout << "�⺻ �����ڰ� ȣ��Ǿ���." << endl;
}
Circle::Circle(const Circle& circle) : radius(circle.radius)
{
	cout << "���� �����ڰ� ȣ��Ǿ���." << endl;
}
Circle::~Circle()
{
	cout << "�Ҹ��ڰ� ȣ��Ǿ���!" << radius;
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