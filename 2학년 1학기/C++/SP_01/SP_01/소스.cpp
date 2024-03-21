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

	cout << "시간을 입력하세요 : ";
	cin >> hours;
	cout << "분을 입력하세요 : ";
	cin >> minutes;
	cout << "초를 입력하세요 : ";
	cin >> seconds;

	time = hours * hour + minutes * minute + seconds * second;

	cout << "시간을 초 단위로 환산하면 " << time << "초입니다.";
	return 0;
}