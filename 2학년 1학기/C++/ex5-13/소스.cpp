#include <iostream>
using namespace std;

int main()
{
	int score;
	char grade;

	do
	{
		cout << "0 ~ 100�� ������ �ִ� ���� �Է� : ";
		cin >> score;
	} while (score < 0 || score > 100);

	switch (score / 10)
	{
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	defalut: grade = 'F';
	}

	cout << "������ " << grade << endl;
	
	return 0;
}