#include <iostream>
using namespace std;

int main()
{
	int score = 92;
	int* pScore = &score;
	int** ppScore = &pScore;

	cout << *pScore << endl; // 92
	cout << *ppScore << endl; // score �ּ�
	cout << &score << endl; // acore �ּ�
	cout << **ppScore << endl; // 92
}