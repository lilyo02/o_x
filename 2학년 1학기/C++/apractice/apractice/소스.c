#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void lotto_check(int lotto[]);
void main()
{
	int i, j, n, lotto[7] = 0;

	srand(time(NULL));

	printf("로또번호 생성\n");
	printf("로또 게임 횟수 입력 : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 7; j++)
		{
			lotto[j] = rand() % 45 + 1;
		}

		lotto_check(lotto);

		printf("set %2d : ", i);
		for (j = 0; j < 7; j++)
		{
			printf("%2d", lotto[j]);
		}
		printf("\n");
	}
}

void lotto_check(int lotto[])
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (lotto[i] == lotto[j])
			{
				lotto[i] = rand() % 45 + 1;
				i--;
				break;
			}
		}
	}
}