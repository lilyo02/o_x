#include <stdio.h>
void main()
{
	int number, temp, n;

	printf("���ڸ� �Է� : ");
	scanf_s("%d", &number);
	printf("\n");

	printf("����\n");

	if (number < 100000)
	{
		for (temp = 10000; temp >= 1; temp /=10)
		{
			n = number / temp;
			number %= temp;
			printf("%5d ���� : %d\n",temp, n);
		}
	}
}