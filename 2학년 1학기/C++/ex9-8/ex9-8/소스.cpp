#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++)
	{
		/*cout << "포인터 연산 arr + " << i << " ";
		cout << arr + i << endl;
		cout << "& 연산자 &arr[" << i << "] ";
		cout << &arr[i] << endl << endl;
		*/

		cout << "포인터 연산 *(arr + " << i << ") ";
		cout << *(arr + i) << endl;
		cout << " & 연산자 arr[" << i << "] ";
		cout << arr[i] << endl << endl;
	}

	return 0;
}