#include <iostream>
using namespace std;
#ifndef DIV_H
#define DIV_H

class Div
{
private:
	int a, b;
public:
	Div();
	~Div();
	void setValue(int x, int y);
	int calculate();
};

#endif
#pragma once