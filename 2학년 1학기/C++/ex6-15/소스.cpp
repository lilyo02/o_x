#include <iostream>
using namespace std;
void swap(int& first, int& second);

int main()
{
	int first = 10;
	int second = 20;

	swap(first, second);
	cout << "main 함수의 first : " << first << endl;
	cout << "main 함수의 second : " << second << endl;

	return 0;
}

void swap(int& fst, int& snd)
{
	int temp = fst;
	fst = snd;
	snd = temp;
}