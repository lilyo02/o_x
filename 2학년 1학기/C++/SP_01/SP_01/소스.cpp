#include <iostream>
using namespace std;

int main()
{
	const unsigned int hour = 3600;
	const unsigned int minute = 60;
	const unsigned int second = 1;

	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;

	unsigned long time;

	cout << "�ð��� �Է��ϼ��� : ";
	cin >> hours;
	cout << "���� �Է��ϼ��� : ";
	cin >> minutes;
	cout << "�ʸ� �Է��ϼ��� : ";
	cin >> seconds;

	time = hours * hour + minutes * minute + seconds * second;

	cout << "�ð��� �� ������ ȯ���ϸ� " << time << "���Դϴ�.";
	return 0;
}