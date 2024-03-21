#include <iostream>
using namespace std;

int main()
{
	int x = 8;
	int y = 10;

	// *= 복합 대입연산자라 우선순위 밀림!!!!!
	y *= x + 5;

	cout << "y의 값 : " << y;

	return 0;
}