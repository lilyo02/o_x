#include <iostream>
using namespace std;
void count();

int main()
{
	int i;
	for (i = 1; i <= 3; i++)
		count();
}

void count()
{
	int acnt = 0;
	static int stcnt = 0;

	acnt += 1; // 호출할 때마다 초기화
	stcnt += 1; // 지속적으로 기억

	cout << "auto count = " << acnt << "  static count = " << stcnt << endl;
}