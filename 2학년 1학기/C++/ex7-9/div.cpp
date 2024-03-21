#include <iostream>
#include <cassert>
using namespace std;
#include "div.h"

Div::Div()
{
}
Div::~Div()
{
}
void Div::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Div::calculate()
{
	if (b == 0)
	{
		cout << "0으로 나눌 수 없음" << endl;
		assert(false);
	}
	return a / b;
}