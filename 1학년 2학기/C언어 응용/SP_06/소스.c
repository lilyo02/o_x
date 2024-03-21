#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void phone_number(int n, char m[]);
void main()
{
	char ph[20] = " ";
	int length;
	printf("휴대폰번호 입력 : ");
	scanf("%s", ph);
	length = strlen(ph);
	phone_number(length, ph);
}
void phone_number(int n, char m[])
{
	int i;
	for (i = 0; i <= n-1; i++)
	{
		printf("%c", m[i]);

		if (i == 2 || i == 6)
		{
			printf("-");
		}
	}
}