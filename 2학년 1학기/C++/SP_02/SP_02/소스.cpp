#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x;

	cout << "number�� �ε� �Ҽ��� �� �Է� : ";
	cin >> x;

	cout << fixed << setprecision(2);
	cout << "�Էµ� number�� �� : " << x << endl;
	cout << "������ : " << (int)x << endl;
	cout << "�Ҽ��� : " << x - (int)x << endl;

	return 0;
}