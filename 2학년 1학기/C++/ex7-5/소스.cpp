#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double height;
	static int count; // ���� ��� ����
public:
	Rectangle(double length, double height);
	Rectangle();
	~Rectangle();
	void print() const;
	Rectangle(const Rectangle& rect);
	static int getCount(); // ���� ��� �Լ�
};

int Rectangle::count = 0;

void Rectangle::print() const
{
	cout << length << " * " << height << endl;
}
// ��ü �� ������ count �ϳ��� ������Ŵ
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
Rectangle :: ~Rectangle() // �Ҹ��ڶ� count ����
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
		Rectangle rect1(3.2, 1.2); // �Ű����� �ִ� ������
		rect1.print();
		Rectangle rect2(1.5, 2.1);
		rect2.print();
		Rectangle rect3;
		rect3.print();
		Rectangle rect4(rect1);
		rect4.print();
		Rectangle rect5(rect2);
		rect5.print();
		 
		cout << "��ü�� �� : " << rect5.getCount() << endl;
		cout << "��ü�� �� : " << Rectangle::getCount() << endl;
	} // ������ ��ȣ ������ �Ҹ��� ȣ��
	cout << "��ü�� �� : " << Rectangle::getCount() << endl << endl;
	// �Ҹ��ڷ� ��ü �� locking �ż� 0���� ��������

	return 0;
}