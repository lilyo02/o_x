#include <iostream>
using namespace std;
void swap(int& first, int& second);

int main()
{
	int first = 10;
	int second = 20;

	swap(first, second);
	cout << "main �Լ��� first : " << first << endl;
	cout << "main �Լ��� second : " << second << endl;

	return 0;
}

void swap(int& fst, int& snd)
{
	int temp = fst;
	fst = snd;
	snd = temp;
}