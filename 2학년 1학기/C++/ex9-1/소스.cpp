#include <iostream>
using namespace std;

int main()
{
	int score = 92;
	int score3 = 100;
	int& rScore1 = score;
	int& rScore2 = score;
	int& rScore3 = score;

	cout << "������ ���� ���, ���� �����ϱ�" << endl;
	cout << "score : " << score << endl;

	cout << "���� ���� ���, ���� �����ϱ�" << endl;
	cout << "rScore1 : " << rScore1 << endl;
	rScore2 = score + 5;
	cout << "rScore2 (score + 5) : " << rScore2 << endl;
	rScore3 = score3;
	cout << "rScore3 (score3) : " << rScore3 << endl;
	cout << "score : " << score << endl;

	return 0;
}