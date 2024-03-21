#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	long elapsedSeconds = time(0); // 경과한 초
	cout << "elapsedSeconds : " << elapsedSeconds << endl;
	int currentSecond = elapsedSeconds % 60;
	cout << "currentSecond = elapsedSeconds % 60 : " << currentSecond << endl << endl;

	long elpasedMinutes = elapsedSeconds / 60; // 경과한 분
	cout << "elpasedMinutes = elapsedSeconds / 60 : " << elpasedMinutes << endl;
	int currentMinute = elpasedMinutes % 60;
	cout << "currentMinute = elpasedMinutes % 60 : " << currentMinute << endl << endl;

	long elapsedHours = elpasedMinutes / 60; // 경과한 시간
	cout << "elapsedHours = elpasedMinutes / 60 : " << elapsedHours << endl;
	int currentHour = elapsedHours % 24;
	cout << "currentHour = elapsedHours % 24 : " << currentHour << endl << endl;

	cout << "(그리니치 표준시) 현재 시간 : ";
	cout << currentHour << " : " << currentMinute << " : " << currentSecond << endl;
	cout << "(한국 표준시) 현재 시간 : "; // 그리니치 표준시 = 한국 표준시 + 9
	cout << currentHour + 9 << " : " << currentMinute << " : " << currentSecond << endl;

	return 0;
}