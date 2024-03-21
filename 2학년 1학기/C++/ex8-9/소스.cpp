#include <iostream>
#include <iomanip>
using namespace std;

void findGrades(const int scores[], char grades[], int size);
void print(const string names[], const int scores[], const char grades[], int size);

int main()
{
	string names[4] = { "George", "John", "Luci", "Mary" };
	int scores[4] = { 82, 73, 91, 72 };
	char grades[4];

	findGrades(scores, grades, 4);
	print(names, scores, grades, 4);

	return 0;
}

void print(const string names[], const int scores[], const char grades[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(10) << left << names[i] << "   " << setw(2);
		cout << scores[i] << "   " << setw(2) << grades[i] << endl;
	}
	cout << endl;
}
void findGrades(const int scores[], char grades[], int size)
{
	char temp[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A' };

	for (int i = 0; i < size; i++)
	{
		grades[i] = temp[scores[i]/10];
		// 학점이니까 70점 대이면 10으로 나누었을때 7이므로 7번째 인덱스 호출
	}
}