#include <iostream>
using namespace std;

int main()
{
	int temperature;
	bool hot;
	bool cold;

	cout << "���� �µ� �Է� : ";
	cin >> temperature;
	hot = temperature >= 23;
	cold = temperature <= 15;

	if (hot || cold)
	{
		cout << "�������� �����ϴ�." << endl;
		if (hot)
		{
			cout << "�ù� ��带 �����մϴ�!" << endl;
		}
		else
		{
			cout << "���� ��带 �����մϴ�!" << endl;
		}
	}
	else
	{
		cout << "�������� �����ϴ�!" << endl;
	}

	return 0;
}