#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	long elapsedSeconds = time(0); // ����� ��
	cout << "elapsedSeconds : " << elapsedSeconds << endl;
	int currentSecond = elapsedSeconds % 60;
	cout << "currentSecond = elapsedSeconds % 60 : " << currentSecond << endl << endl;

	long elpasedMinutes = elapsedSeconds / 60; // ����� ��
	cout << "elpasedMinutes = elapsedSeconds / 60 : " << elpasedMinutes << endl;
	int currentMinute = elpasedMinutes % 60;
	cout << "currentMinute = elpasedMinutes % 60 : " << currentMinute << endl << endl;

	long elapsedHours = elpasedMinutes / 60; // ����� �ð�
	cout << "elapsedHours = elpasedMinutes / 60 : " << elapsedHours << endl;
	int currentHour = elapsedHours % 24;
	cout << "currentHour = elapsedHours % 24 : " << currentHour << endl << endl;

	cout << "(�׸���ġ ǥ�ؽ�) ���� �ð� : ";
	cout << currentHour << " : " << currentMinute << " : " << currentSecond << endl;
	cout << "(�ѱ� ǥ�ؽ�) ���� �ð� : "; // �׸���ġ ǥ�ؽ� = �ѱ� ǥ�ؽ� + 9
	cout << currentHour + 9 << " : " << currentMinute << " : " << currentSecond << endl;

	return 0;
}