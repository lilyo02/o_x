#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "������ 0 ~ 6 ������ �� �Է� : ";
	cin >> day;

	switch (day)
	{
	case 0: cout << "�Ͽ���" << endl;
		cout << "����� ����" << endl;
		break;
	case 1: cout << "������" << endl;
		cout << "�(�ｺ, �ʶ��׽�)" << endl;
		break;
	case 2: cout << "ȭ����" << endl;
		cout << "���� ����" << endl;
		break;
	case 3: cout << "������" << endl;
		cout << "��û��" << endl;
		break;
	case 4: cout << "�����" << endl;
		cout << "���͵� ����" << endl;
		break;
	case 5: cout << "�ݿ���" << endl;
		cout << "���� ����" << endl;
		break;
	case 6: cout << "�����" << endl;
		cout << "����Ʈ" << endl;
		break;
	default: cout << "�ش����" << endl;
		break;
	}

	return 0;
}