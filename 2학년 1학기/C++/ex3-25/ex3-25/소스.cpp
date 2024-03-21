#include <iostream>
using namespace std;

int main()
{
	bool flag;

	cout << "불 자료형을 true나 false로 입력 : ";
	cin >> boolalpha >> flag; // 조정자를 사용하여 입력

	cout << flag;
	return 0;
}