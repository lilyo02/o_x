#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
private :
	double length;
	double height;
public :
	Rectangle(double length, double height); // �Ű����� �ִ� ������
	Rectangle(const Rectangle& rect); // ���� ������
	~Rectangle(); // �Ҹ���
	void print() const; // ������
	double getArea() const; // ��� �Լ�
	double getPerimeter() const; // ��� �Լ�
};

Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), height(rect.height)
{
	
}

Rectangle :: ~Rectangle()
{

}

Rectangle::Rectangle(double len, double hgt) : length(len), height(hgt)
// ���⿡ ���� �Ŵ°ǰ�???????
{
	if ((length < 0.0) || (height <= 0.0))
	{
		cout << "�簢�� ��ü ���� �Ұ�" << endl;
		assert(false);
	}
}

void Rectangle::print() const
{
	cout << length << " * " << height << endl;
}

double Rectangle::getArea() const
{
	return (length * height);
}

double Rectangle::getPerimeter() const
{
	return (2 * (length + height));
}

int main()
{
	Rectangle rect1(3.0, 4.2); // �Ű����� �ִ� ������, �� �ȿ� ���� �� length ���̶� height ��
	Rectangle rect2(5.1, 10.2); // �Ű����� �ִ� ������
	Rectangle rect3(rect2); // ���� ������, rect2�� �Ȱ��� �� ���� �Ȱ��� �� ����

	cout << "Rectangle 1 : ";
	rect1.print(); // void Ÿ���̶� ���� ����
	cout << "Area : " << rect1.getArea() << endl;
	cout << "Perimeter : " << rect1.getPerimeter() << endl << endl;

	cout << "Rectangle 2 : ";
	rect2.print();
	cout << "Area : " << rect2.getArea() << endl;
	cout << "Perimeter : " << rect2.getPerimeter() << endl << endl;

	cout << "Rectangle 3 : ";
	rect3.print();
	cout << "Area : " << rect3.getArea() << endl;
	cout << "Perimeter : " << rect3.getPerimeter() << endl << endl;

	// �������� rect3, rect2, rect1 �̷��� �������� �Ҹ��� ȣ��?
	return 0;
}