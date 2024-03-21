#include <iostream>
#include <iomanip>
using namespace std;

void input(int mat[][3], int row, int col);
void print(int mat[][3], int row, int col);
void transpose(int Omat[][3], int Tmat[][3], int row, int col);

int main()
{
	const int row = 3;
	const int col = 3;
	int matrix[row][col] = { 0 };
	int Tmatrix[row][col] = { 0 };

	cout << "Initalization matrix (3 * 3)" << endl;
	input(matrix, row, col);
	cout << "Orginal matrix (3 * 3)" << endl;
	print(matrix, row, col);
	transpose(matrix, Tmatrix, row, col);
	cout << "Transpose matrix (3 * 3)" << endl;
	print(Tmatrix, row, col);
}

void input(int mat[][3], int row, int col)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> mat[i][j];
		}
	}
}
void print(int mat[][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(2) << mat[i][j];
		}
		cout << endl;
	}
}

void transpose(int Omat[][3], int Tmat[][3], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Tmat[i][j] = Omat[j][i];
		}
	}
}