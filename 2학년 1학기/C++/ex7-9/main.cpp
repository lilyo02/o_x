#include <iostream>
using namespace std;
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main()
{
	Add aa;
	Sub ss;
	Mul mm;
	Div dd;

	cout << "종료 (ex, 2 3 #) " << endl;
	
	while (true)
	{
		int x, y;
		char op;

		cout << "두 정수와 연산자를 입력 (ex, 2 3 *) >> ";
		cin >> x >> y >> op;

		if (op == '#')
			break;

		switch (op)
		{
		case '+': aa.setValue(x, y);
			cout << aa.calculate(); break;
		case '-': ss.setValue(x, y);
			cout << ss.calculate(); break;
		case '*': mm.setValue(x, y);
			cout << mm.calculate(); break;
		case '/': dd.setValue(x, y);
			cout << dd.calculate(); break;
		}
		cout << endl;
	}
}