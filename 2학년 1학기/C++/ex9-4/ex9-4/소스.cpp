#include <iostream>
using namespace std;

int main()
{
	int score = 92;
	int* pScore = &score;

	cout << "score�� ���� ���� : " << score << endl;
	cout << "score�� ���� ���� : " << *pScore << endl;

	return 0;
}