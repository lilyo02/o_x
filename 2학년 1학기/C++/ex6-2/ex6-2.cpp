#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	double term;

	cout << "��� a �Է� : ";
	cin >> a;
	cout << "��� b �Է� : ";
	cin >> b;
	cout << "��� c �Է� : ";
	cin >> c;

	term = pow(b, 2) - 4 * a * c; // �Ǻ��� (b^2 -4ac) ���
	
	if (term < 0)
	{
		cout << "���� ����!" << endl;
	}
	else if (term == 0)
	{
		cout << "�� ���� ����." << endl;
		cout << "x1 = x2 = " << -b / (2 * a) << endl;
	}
	else
	{
		cout << "���� �ٸ� �� ���� ����" << endl;
		cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
		cout << "x2 = " << (-b + sqrt(term)) / (2 * a) << endl;
	}

	return 0;
}