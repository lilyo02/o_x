#include <iostream>
using namespace std;

int main()
{
	int x = -1245;
	unsigned int y = 1245;
	unsigned int z = -2367; // 논리적 오류
	unsigned int t = 14.56; // 소수점 아래 부분 잘림

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << t;
	return 0;
}