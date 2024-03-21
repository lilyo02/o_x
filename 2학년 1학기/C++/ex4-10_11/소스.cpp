#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "스레쥴 0 ~ 6 범위의 값 입력 : ";
	cin >> day;

	switch (day)
	{
	case 0: cout << "일요일" << endl;
		cout << "자취방 가기" << endl;
		break;
	case 1: cout << "월요일" << endl;
		cout << "운동(헬스, 필라테스)" << endl;
		break;
	case 2: cout << "화요일" << endl;
		cout << "전공 공부" << endl;
		break;
	case 3: cout << "수요일" << endl;
		cout << "대청소" << endl;
		break;
	case 4: cout << "목요일" << endl;
		cout << "스터디 모임" << endl;
		break;
	case 5: cout << "금요일" << endl;
		cout << "본가 가기" << endl;
		break;
	case 6: cout << "토요일" << endl;
		cout << "데이트" << endl;
		break;
	default: cout << "해당없음" << endl;
		break;
	}

	return 0;
}