#include <iostream>
using namespace std;

int main()
{
	int i, num, mod, count;
	mod = count = 0;

	// 내가 친 코드 = 교수님 버전
	do
	{
		cout << "양의 정수 입력 : ";
		cin >> num;
	} while (num <= 0);

	for (i = 1; i <= num; i++)
	{
		mod = num % i;

		if (mod == 0)
		{
			count++;
			// 업그레이드
			cout << i << " ";
		}
	}


	if (count == 2)
		cout << endl << num << "은(는) 소수 입니다." << endl;
	else
		cout << endl << num << "은(는) 소수가 아닙니다." << endl;

	return 0;
}