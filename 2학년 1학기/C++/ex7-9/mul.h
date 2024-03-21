#include <iostream>
using namespace std;
#ifndef MUL_H
#define MUL_F

class Mul
{
private:
	int a, b;
public:
	void setValue(int x, int y);
	Mul();
	~Mul();
	int calculate() const;
};
#endif
#pragma once