#include <stdio.h>
void main()
{
	int number, temp, n;

	printf("숫자를 입력 : ");
	scanf_s("%d", &number);
	printf("\n");

	printf("단위\n");

	if (number < 100000)
	{
		for (temp = 10000; temp >= 1; temp /=10)
		{
			n = number / temp;
			number %= temp;
			printf("%5d 단위 : %d\n",temp, n);
		}
	}
}