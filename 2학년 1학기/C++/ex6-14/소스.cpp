#include <iostream>
using namespace std;
void fun(int& y);

int main()
{
	int x = 10;
	
	fun(x);
	cout << "main �Լ��� x : " << x << endl;

	return 0;
}

void fun(int& y)
{
	y++;
	cout << "fun �Լ��� y : " << y << endl;
}