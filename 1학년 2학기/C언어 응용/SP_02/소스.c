#include <stdio.h>
void main()
{
	int i, j, num;

	for (i = 1; i <= 5; i++)
	{
		for (j = 4; j >= i; j--)
		{
			printf(" ");
		}
		for (num = 1; num <= i; num++)
		{
			printf("%d", num);
		}
		for (num = 1; num <= i-1; num++)
		{
			printf("%d", num);
		}
		printf("\n");
	}
}