#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j, rows, cols;

	cout << "���� ���� �Է� : ";
	cin >> rows;
	cout << "���� ���� �Է� : ";
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