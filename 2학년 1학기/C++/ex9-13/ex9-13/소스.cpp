#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	int* pArray;

	do {
		cout << "0���� ū �迭�� ũ�⸦ �Է� : ";
		cin >> size;
	} while (size <= 0);

	pArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << i << "��° ����� ���� �Է� : ";
		cin >> *(pArray + i);
	}

	cout << "�迭 ������ ��� : " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << *(pArray + i) << " " << pArray[i] << " " << endl;
	}
	delete[] pArray;

	return 0;
}