#include <iostream>
using namespace std;

void swap(int& first, int& second);

int main()
{
	int x = 10;
	int y = 20;

	cout << "�����ϱ� ���� x�� y�� ��" << endl;
	cout << "x : " << x << " " << "y : " << y << endl;

	swap(x, y);
	cout << "���� ���� x�� y�� ��" << endl;
	cout << "x : " << x << " " << "y : " << y << endl;
	return 0;
}

void swap(int& rX, int& rY)
{
	int temp = rX;
	rX = rY;
	rY = temp;
}