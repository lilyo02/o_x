#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score, sum, counter, subject;
	sum = counter = 0;
	double average;

	cout << "과목의 개수를 입력 : ";
	cin >> subject;

	while (counter < subject)
	{
		cout << "점수 입력 (0~100의 범위) : ";
		cin >> score;

		// 입력 점수가 범위를 벗어나는 것을 방지하기 위한 조건문
		if (score < 0 || score > 100)
		{
			cout << "▷▷ ";
			// 다시 반복문의 시작으로 되돌아가야하므로 continue 사용
			continue;
		}

		sum += score;
		counter++;
	}

	average = double(sum) / subject;
	cout << "평균 점수 : " << average << "\n";

	// 교수님 버전
	average = static_cast <double>(sum) / subject;
	cout << fixed << setprecision(2) << showpoint;
	cout << "평균 점수 : " << average << "\n";

	return 0;
}