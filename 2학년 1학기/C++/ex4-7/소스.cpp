#include <iostream>
using namespace std;

int main()
{
	int age;
	bool eligible;

	cout << "���̸� �Է� : ";
	cin >> age;

	eligible = (age >= 25) && (age <= 100);

	if (eligible)
	{
		cout << "�ڵ����� �뿩�� �� �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << "�˼��մϴ�. �ڵ����� �뿩�� �� �����ϴ�." << endl;
	}

	return 0;
}