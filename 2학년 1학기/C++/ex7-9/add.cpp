#include "add.h"

Add::Add() : a(0), b(0) // : �ڿ� �ִ� �� �̰� �ҷ��� ������ �ʱ�ȭ ���ִ� ��
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