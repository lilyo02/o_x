#include <iostream>
using namespace std;

int first = 20;
static int second = 30;

int main()
{
	static int third = 50;

	cout << "���� ������ �� : " << first << endl;
	cout << "���� ���� ������ �� : " << second << endl;
	cout << "���� ���� ������ �� : " << third << endl;

	return 0;
}