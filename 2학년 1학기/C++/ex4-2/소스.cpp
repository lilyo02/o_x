#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double hours;
	double rate;
	double regularPay;
	double overPay;
	double totalPay;

	cout << "���� �ð� �Է� : ";
	cin >> hours;
	cout << "�ð� �� �޿� �Է� : ";
	cin >> rate;

	regularPay = hours * rate; // �Ϲ� �޿�
	overPay = 0.0;

	if (hours > 40.0) // �ʰ��ٹ� ����
	{
		overPay = (hours - 40.0) * rate * 0.30;
	}

	totalPay = regularPay + overPay; // �Ϲ� + �ʰ�

	cout << fixed << showpoint << setprecision(2);
	cout << "�Ϲ� �޿� = " << regularPay << endl;
	cout << "�ʰ� �ٹ� �޿� = " << overPay << endl;
	cout << "��ü �޿� = " << totalPay << endl;

	return 0;
}