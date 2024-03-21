#include "mul.h"

Mul::Mul() : a(0), b(0) 
{
}
Mul::~Mul()
{
}
void Mul::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Mul::calculate() const
{
	return a * b;
}