#include <iostream>
using namespace std;

int main()
{
	int score;
	char grade;
	bool flag = 0;

	cout << "0 ~ 100점 사이의 점수 입력 : ";
	cin >> score;

	switch (score / 10)
	{
	case 10:
	case 9: grade = 'A', flag = false; break;
	case 8: grade = 'B', flag = false; break;
	case 7: grade = 'C', flag = false; break;
	case 6: grade = 'D', flag = false; break;
	default: grade = 'F', flag = true; break;
	}

	if (score % 10 >= 5)
	{
		cout << "Score : " << score << "\t Grade : " << grade << "+";
	}
	else
	{
		cout << "Score : " << score << "\t Grade : " << grade;
	}

	
	if (flag == 0)
	{
		cout << "\t Pass !!";
	}
	else
	{
		cout << "\t Fail !!";
	}

	return 0;
}