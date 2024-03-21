#include <iostream>
using namespace std;

int main()
{
	int num, count, sum;
	count = sum = 0;

	cout << "양의 정수 5개의 합을 구하자!!" << endl;

	// 내가 친 코드
	do
	{
		cout << "양의 정수 입력 : ";
		cin >> num;
		
		if (num > 0)
		{
			sum += num;
			count++;
		}
		else
		{
			cout << "*";
			continue;
		}

	} while (count < 5);

	cout << "양의 정수 총합 : " << sum << endl;

	// 교수님 버전
	while (count < 5)
	{
		cout << "양의 정수 입력 : ";
		cin >> num;

		if (num <= 0)
		{
			cout << "☆";
			continue;
		}
		sum += num;
		count++;
	}

	cout << "양의 정수 총합 : " << sum;

	return 0;
}