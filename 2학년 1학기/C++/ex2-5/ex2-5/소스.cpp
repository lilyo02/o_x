#include <iostream>
using namespace std;

int main()
{
	int balance = 0;  // ����
	int transaction; // �ŷ�

	cout << "ù ��° �ŷ� �ݾ� �Է� : ";
	cin >> transaction;
	balance = balance + transaction;

	cout << "�� ��° �ŷ� �ݾ� �Է� : ";
	cin >> transaction;
	balance = balance + transaction;

	cout << "�� ��° �ŷ� �ݾ� �Է� : ";
	cin >> transaction;
	balance = balance + transaction;

	cout << "������ ���� �ܾ��� " << balance << "�޷��Դϴ�.\n\n";
	return 0;
}