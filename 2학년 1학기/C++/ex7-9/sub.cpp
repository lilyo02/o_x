#include "sub.h"

Sub::Sub() : a(0), b(0)
{
}
Sub::~Sub()
{
}
void Sub::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Sub::calculate() const
{
	return a - b;
}