#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << " 0 ~ 100�� ������ ������ �Է� : ";
	cin >> score;

	if (score >= 70)
	{
		cout << "�հ�" << endl;
	}
	else
	{
		cout << "���հ�" << endl;
	}

	return 0;
}