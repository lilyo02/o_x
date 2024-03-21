#include <iostream>
using namespace std;
int input();
bool process(int year);
void output(int year, bool result);

int main()
{
	int year = input();
	bool result = process(year);
	output(year, result);
}

int input()
{
	int year;

	do
	{
		cout << " �⵵ �Է� (1800����) : ";
		cin >> year;
	} while (year <= 1800);

	return year;
}

bool process(int year)
{
	bool result;
	result = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);

	return result;

	// == return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)
	// �׳� �̷� ������ �ص� bool������ �ٷ� �Ѿ����
}

void output(int year, bool result)
{
	if (result)
		cout << year << "���� �����Դϴ�." << endl;
	else
		cout << year << "���� ������ �ƴմϴ�." << endl;
}