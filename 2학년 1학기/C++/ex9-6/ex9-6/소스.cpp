#include <iostream>
using namespace std;

void swap(int* first, int* second);

int main()
{
	int x = 10;
	int y = 20;

	cout << "�����ϱ� ���� x�� y�� ��" << endl;
	cout << "x : " << x << "  y : " << y << endl;

	swap(&x, &y);

	cout << "���� ���� x�� y�� ��" << endl;
	cout << "x : " << x << "  y : " << y << endl;

	return 0;
}

void swap(int* pX, int* pY)
{
	int temp = 0;

	temp = *pX;
	*pX = *pY;
	*pY = temp;

}