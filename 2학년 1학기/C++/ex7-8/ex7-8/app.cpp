#include "time.h"
int main()
{
	Time time(4, 5, 27);
	cout << "���� �ð� : ";
	time.print();

	for (int i = 0; i < 143500; i++)
	{
		time.tick();
	}

	cout << "143500�ʰ� ������ : ";
	time.print();

	return 0;
}