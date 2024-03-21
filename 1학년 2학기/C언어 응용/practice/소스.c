#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printMonthly(int year, int month);
void printHead(int year, int month);
void printBody(int year, int month);
void printmon(int month);
int getStart(int year, int month);
int getTotal(int year, int month);
int DayCalcu(int year, int month);
int yoon(int year);

void mode(int year, int month);
void Add_Schedule(int month, int date);

FILE* save;
void main()
{
	save = fopen("save.txt", "w");
	if (save == NULL)
	{
		fprintf(stderr, "save.txt file �� �� ����\n");
		exit(1);
	}
	int year, month = 0;
	printf("������ �߰�, ������ �⵵�� �Է����ּ���\n");
	scanf("%d", &year);
	printf("������ �߰�, ������ ���� �Է����ּ���\n");
	scanf("%d", &month);

	printMonthly(year, month);
	mode(year, month);
}
void printMonthly(int year, int month)
{
	printHead(year, month);
	printBody(year, month);
}
void printHead(int year, int month)
{
	printmon(month);
	printf("\t%d\n", year);
	printf("======================================\n");
	printf("  Sun Mon Tue Wed Thu Fri Sat\n");
}
void printmon(int month)
{
	switch (month)
	{
	case 1 :
		printf("\tJAN");
		break;
	case 2 :
		printf("\tFEB");
		break;
	case 3 :
		printf("\tMAR");
		break;
	case 4 :
		printf("\tAPR");
		break;
	case 5 :
		printf("\tMAY");
		break;
	case 6 :
		printf("\tJUN");
		break;
	case 7 :
		printf("\tJUL");
		break;
	case 8 :
		printf("\tAUG");
		break;
	case 9 :
		printf("\tSEP");
		break;
	case 10 :
		printf("\tOCT");
		break;
	case 11:
		printf("\tNOV");
		break;
	case 12:
		printf("\tDEC");
		break;
	}
}
void printBody(int year, int month)
{
	int start = getStart(year, month);
	int totalnum = DayCalcu(year, month);

	for (int i = 0; i < start; i++)
		printf("    ");
	for (int i = 1; i <= totalnum; i++)
	{
		printf("%4d", i);
		if ((i + start) % 7 == 0)
			printf("\n");
	}
}
int getStart(int year, int month)
{
	int start = 0;
	int total = getTotal(year, month);

	return (start + total) % 7;
}
int getTotal(int year, int month)
{
	int total = 0;

	for (int i = 1950; i < year; i++)
	{
		if (yoon(i))
			total += 366;
		else
			total += 365;
	}
	for (int i = 1; i < month; i++)
		total += DayCalcu(year, i);

	return total;
}
int yoon(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int DayCalcu(int year, int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else if (month == 2)
		if (yoon(year) == 1)
			return 29;
		else
			return 28;
}

void mode(int year, int month)
{
	int mode, date = 0;
	char again;

	do {
		printf("\n\n�޷� ���� ������ �߰�, �����ϰ� ���� ���� �Է����ּ���\n");
		scanf("%d", &date);
		printf("[1] ���� �߰� [0] ����\n");
		scanf("%d", &mode);

		fprintf(save, "%2d�� %2d�� %d��\n ", year, month, date);

		switch (mode)
		{
		case 0:
			break;
		case 1:
			Add_Schedule(month, date);
			break;
		}

		printf("�� �߰��Ͻ� ������ �����ø� y��, �����ϰ� �����ø� n�� �Է��ּ���\n");
		again = getchar();
	} while (again != 'n');

	fclose(save);
}
void Add_Schedule(int month, int date)
{
	char schedule[100];
	printmon(month);
	printf(" %3d\n", date);

	printf("�߰��� ������ �Է����ּ���\n");
	scanf("%s", schedule);

	fprintf(save, "%s\n", schedule);
	getchar();
}