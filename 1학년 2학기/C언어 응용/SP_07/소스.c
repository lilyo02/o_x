#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void gotoxy(int x, int y);
void main()
{
	int i, dan[10], num[10], ans[10];
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		dan[i] = rand() % 9 + 1;
		num[i] = rand() % 9 + 1;
		ans[i] = dan[i] * num[i];
	}

	printf("������ ���� Ǯ��\n\n");
	printf("�� ������ ���� �Է��ϰ� Enter.\n\n");

	for (i = 0; i < 10; i++)
	{
		printf("%2d ; %d * %d = ? \n", i + 1, dan[i], num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		gotoxy(16, 5 + i);
		fflush(stdin);
		scanf("%d", &ans[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		if (dan[i] * num[i] == ans[i])
		{
			gotoxy(20, 5 + i);
			printf("O");
		}
		else
		{
			gotoxy(20, 5 + i);
			printf("X");
			printf("���� : %d", dan[i] * num[i]);
		}
	}
	printf("\n");
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}