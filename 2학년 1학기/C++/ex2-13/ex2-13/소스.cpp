#include <iostream>
#include <string> // string Ŭ������ ����ϱ� ����
using namespace std;

int main()
{
	string first;
	string initial;
	string last;
	string space = " ";
	string dot = ".";
	string fullName;
	
	cout << "�̸�(first name) �Է��ϱ� : ";
	cin >> first;
	cout << "�̴ϼ�(initial) �Է��ϱ� : ";
	cin >> initial;
	cout << "��(last name) �Է��ϱ� : ";
	cin >> last;

	// ���� �����ڸ� ����ؼ� ���ڿ� ����
	fullName = first + space + initial + dot + space + last;

	cout << "��ü �̸�(full name) : " << fullName;
	return 0;
}