#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << " 0 ~ 100점 사이의 점수를 입력 : ";
	cin >> score;

	if (score >= 70)
	{
		cout << "합격" << endl;
	}
	else
	{
		cout << "불합격" << endl;
	}

	return 0;
}