#include <iostream>
using namespace std;

int first = 20;
static int second = 30;

int main()
{
	static int third = 50;

	cout << "전역 변수의 값 : " << first << endl;
	cout << "전역 정적 변수의 값 : " << second << endl;
	cout << "지역 정적 변수의 값 : " << third << endl;

	return 0;
}