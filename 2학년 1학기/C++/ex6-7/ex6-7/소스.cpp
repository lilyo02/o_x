#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int low = 5;
	int high = 15;
	int tryLimit = 5;
	int guess;
	srand(time(0));
	int num = rand() % (high - low + 1) + low;

	int counter = 1;
	bool found = false;

	while (counter <= tryLimit && !found)
	{
		do
		{
			cout << "1 ~ 15 ������ ���� �Է� : ";
			cin >> guess;
		} while (guess < 5 || guess > 15);

		if (guess == num)
			found = true;
		else if (guess > num)
			cout << "�� ���� �����Դϴ�." << endl;
		else
			cout << "�� ū �����Դϴ�." << endl;

		counter++;
	}
	if (found) // ���� ����
	{
		cout << "�����մϴ�. ������ �����߽��ϴ�.";
		cout << "�� = " << num;
	}
	else // ���� ����
	{
		cout << "�ƽ��� ������ �����߽��ϴ�.";
		cout << "�� = " << num;
	}
	return 0;
}