#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
private :
	double length;
	double height;
public :
	Rectangle(double length, double height); // 매개변수 있는 생성자
	Rectangle(const Rectangle& rect); // 복사 생성자
	~Rectangle(); // 소멸자
	void print() const; // 설정자
	double getArea() const; // 멤버 함수
	double getPerimeter() const; // 멤버 함수
};

Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), height(rect.height)
{
	
}

Rectangle :: ~Rectangle()
{

}

Rectangle::Rectangle(double len, double hgt) : length(len), height(hgt)
// 여기에 제한 거는건가???????
{
	if ((length < 0.0) || (height <= 0.0))
	{
		cout << "사각형 객체 생성 불가" << endl;
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
	Rectangle rect1(3.0, 4.2); // 매개변수 있는 생성자, 이 안에 넣은 게 length 값이랑 height 값
	Rectangle rect2(5.1, 10.2); // 매개변수 있는 생성자
	Rectangle rect3(rect2); // 복사 생성자, rect2랑 똑같은 값 들어가서 똑같은 값 나옴

	cout << "Rectangle 1 : ";
	rect1.print(); // void 타입이라 따로 선언
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

	// 마지막에 rect3, rect2, rect1 이렇게 역순으로 소멸자 호출?
	return 0;
}