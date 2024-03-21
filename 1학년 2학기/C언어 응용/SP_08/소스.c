#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void input_ary(int *p, int size);
void print_ary(int *p, int size);
int find_max(int *p, int size);
void main()
{
	int size, max;
	int *ary2 = NULL;

	printf("�� ���� �������� �ʿ��Ѱ���? : ");
	scanf("%d", &size);

	ary2 = (int*)malloc(sizeof(int) * size);

	if (ary2 == NULL)
	{
		printf("�޸� ����! \n");
		exit(1); //� �Լ������� ���α׷� ����
	}

	input_ary(ary2, size);
	max = find_max(ary2, size);
	print_ary(ary2, size);
	printf(" max = %3d \n", max);

	if (ary2 != NULL)
	{
		free(ary2);
		ary2 = NULL;
	}
}
void input_ary(int *p, int size)
{
	int i;

	printf("%d���� ������ �Է� : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &*p++);
}
void print_ary(int *p, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%3d", *p++);
	printf("\n");
}
int find_max(int *p, int size)
{
	int i, max;

	for (i = 0; i < size; i++)
	{
		max = p[i] > p[i + 1] ? p[i] : p[i + 1];
	}
	return max;
}