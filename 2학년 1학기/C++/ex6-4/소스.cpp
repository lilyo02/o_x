#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double PI = 3.141592653589793238462;
	int n; // n : ���� ����
	double s, peri, area; // s : ���� ����  peri : �ѷ�  area : ����

	do
	{
		cout << "���� ���� �Է� (4 �̻��� ����) : ";
		cin >> n;
	} while (n < 4);
	do
	{
		cout << "���� ���� �Է� : ";
		cin >> s;
	} while (s <= 0);

	peri = n * s;
	area = (n * pow(s, 2)) / (n * tan(PI / n));

	cout << "�ѷ� : " << peri << endl;
	cout << "���� : " << area;

	return 0;
}