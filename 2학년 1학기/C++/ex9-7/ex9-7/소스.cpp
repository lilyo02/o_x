#include <iostream>
using namespace std;

/*int larger(int x, int y);

int main()
{
	int x = 10;
	int y = 20;
	int z = larger(x, y);
	cout << z;
	
	return 0;
}

int larger(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	return y;
}*/

int* larger(int* x, int* y);

int main()
{
	int x = 10;
	int y = 20;
	int z = *larger(&x, &y);
	cout << z;

	return 0;
}

int* larger(int* x, int* y)
{
	if (*x > *y)
	{
		return x;
	}
	return y;
}