#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double height;
	static int count; // 정적 멤버 변수
public:
	Rectangle(double length, double height);
	Rectangle();
	~Rectangle();
	void print() const;
	Rectangle(const Rectangle& rect);
	static int getCount(); // 정적 멤버 함수
};

int Rectangle::count = 0;

void Rectangle::print() const
{
	cout << length << " * " << height << endl;
}
// 객체 수 세려고 count 하나씩 증가시킴
Rectangle::Rectangle(double len, double hgt) : length(len), height(hgt)
{
	count++;
}
Rectangle::Rectangle() : length(0.0), height(0.0)
{
	count++;
}
Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), height(rect.height)
{
	count++;
}
Rectangle :: ~Rectangle() // 소멸자라 count 빼기
{
	count--;
}
int Rectangle::getCount()
{
	return count;
}

int main()
{
	{
		Rectangle rect1(3.2, 1.2); // 매개변수 있는 생성자
		rect1.print();
		Rectangle rect2(1.5, 2.1);
		rect2.print();
		Rectangle rect3;
		rect3.print();
		Rectangle rect4(rect1);
		rect4.print();
		Rectangle rect5(rect2);
		rect5.print();
		 
		cout << "객체의 수 : " << rect5.getCount() << endl;
		cout << "객체의 수 : " << Rectangle::getCount() << endl;
	} // 끝나는 괄호 만나면 소멸자 호출
	cout << "객체의 수 : " << Rectangle::getCount() << endl << endl;
	// 소멸자로 객체 다 locking 돼서 0으로 나오나봄

	return 0;
}