#include <iostream>
using namespace std;

int main()
{
	int score;
	char grade;

	do
	{
		cout << "0 ~ 100의 범위에 있는 점수 입력 : ";
		cin >> score;
	} while (score < 0 || score > 100);

	switch (score / 10)
	{
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	defalut: grade = 'F';
	}

	cout << "학점은 " << grade << endl;
	
	return 0;
}