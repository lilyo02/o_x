#include <iostream>
using namespace std;
#ifndef ADD_H
#define ADD_H

class Add
{
private :
	int a, b;
public :
	void setValue(int x, int y);
	Add();
	~Add();
	int calculate() const;
};

#endif
#pragma once