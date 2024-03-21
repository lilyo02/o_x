#include <iostream>
using namespace std;
#ifndef SUB_H
#define SUB_H

class Sub
{
private:
	int a, b;
public:
	Sub();
	~Sub();
	void setValue(int x, int y);
	int calculate() const;
};
#pragma once
#endif