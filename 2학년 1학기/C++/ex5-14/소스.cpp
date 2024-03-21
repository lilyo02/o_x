#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j, rows, cols;

	cout << "행의 수를 입력 : ";
	cin >> rows;
	cout << "열의 수를 입력 : ";
	cin >> cols;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cout << '*';
		}
		cout << endl;
	}

	cout << endl;
	
	return 0;
}