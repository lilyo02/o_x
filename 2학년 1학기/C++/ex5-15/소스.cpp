#include <iostream>
using namespace std;

int main()
{
	int i, j, rows, cols;

	cout << "���� �� �Է� : ";
	cin >> rows;
	cout << "���� �� �Է� : ";
	cin >> cols;

	for (i = 1; i <= rows; i++)
	{
		for (j = i; j < cols + i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}