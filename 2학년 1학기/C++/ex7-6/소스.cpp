#include <iostream>
#include <cassert>
using namespace std;

class Account
{
private :
	long accNumber; // ���¹�ȣ
	double balance; // �ܾ�
	static int base; // ���� �������
public :
	Account(double bal); // ������
	~Account(); // �Ҹ���
	Account(const Account& acc) = delete;
	void checkBalance() const; // �ܾ� Ȯ��
	void deposit(double amount); // �Ա�
	void withdraw(double amount); // ����
	static int getbase(); // ���� ����Լ�
};

int Account::base = 0;

Account::Account(double bal) : balance(bal)
{
	if (bal < 0.0)
	{
		cout << "�ܾ��� ������ �� �� ����. ����!!";
		assert(false);
	}
	base++;
	accNumber = 100000 + base; // ���� ������ ���� ������� Ȱ��

	cout << "����_#" << accNumber << "����." << endl;
	cout << "�ܾ� $" << balance << endl << endl;
}
Account::~Account()
{
	cout << "����_#" << accNumber << "�� ����." << endl;
	cout << "$" << balance << "�� ������ ����." << endl << endl;
}
void Account::checkBalance() const // �ܾ� Ȯ��
{
	cout << "����_#" << accNumber << endl;
	cout << "Ʈ����� - �ܾ� Ȯ��" << endl;
	cout << "�ܾ� : $" << balance << endl << endl;
}
void Account::deposit(double amount) // �Ա�
{
	if (amount > 0.0)
	{
		balance += amount;
		cout << "����_#" << accNumber << endl;
		cout << "Ʈ����� - �Ա� $" << amount << endl;
		cout << "����� �ܾ� : $" << balance << endl << endl;
	}
	else
	{
		cout << "Ʈ������� �ߴܵ�." << endl;
	}
}
void Account::withdraw(double amount) // ����
{
	if (amount > balance)
	{
		amount = balance;
	}
	balance -= amount;
	cout << "����_#" << accNumber << endl;
	cout << "Ʈ����� - ���� $" << amount << endl;
	cout << "����� �ܾ� : $" << balance << endl << endl;
}
int Account::getbase()
{
	return base;
}

int main()
{
	Account acc1(2000);
	Account acc2(5000);
	Account acc3(1000);

	acc1.deposit(150);
	acc2.checkBalance();
	acc1.checkBalance();
	acc3.withdraw(800);
	acc3.withdraw(400);
	acc1.withdraw(1000);
	acc2.deposit(120);

	cout << "--- ���� ���� : " << acc3.getbase() << " ---" << endl << endl;

	return 0;
}