#include <iostream>
using namespace std;

int main()
{
	char grade;
	cout << "���� (A, B, C, D, F) �Է� : ";
	cin >> grade;

	switch (grade)
	{
	case 'A' :
	case 'B' :
	case 'C': cout << "Pass�Դϴ�.\n"; break;
	case 'D' : 
	case 'F': cout << "Fail�Դϴ�.\n"; break;
	default: cout << "�Է� ����. �ٽ� �õ��ϼ���.\n";
	}

	return 0;
}