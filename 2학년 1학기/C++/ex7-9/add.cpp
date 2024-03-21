#include "add.h"

Add::Add() : a(0), b(0) // : 뒤에 있는 건 이거 불러올 때마다 초기화 해주는 거
{
}
Add::~Add()
{
}
void Add::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Add::calculate() const
{
	return a + b;
}