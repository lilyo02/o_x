#include <stdio.h>
int time_pass(int a, int b, int c, int d, int e, int f)
{
	printf("���� ��� ��� program\n");

	printf("�����ð� �Է� (�ð� ��) : ");
	scanf_s("%d %d\n", &a, &b);

	printf("�����ð� �Է� (�ð� ��) : ");
	scanf_s("%d %d\n", &c, &d);

	int sum = 0;

	if (a > c)
		e = 12 - a + c;
	else
		e = c - a;
	if (b > d)
		f = 60 - b + d;
	else
		f = d - b;

	sum = a * 60 + b;

	printf("���� �ð� : %d�ð� %d�� (�� %d��)",e , f, sum);

	return sum;
}
int charge(int a)
{
	int money = 0;
	
	if (a % 10 == 0)
		money = a * 1000;
	else
		money = a * 1000 + 1000;

	return money;
}

void main()
{
	int starth = 0, startm = 0, endh = 0, endm = 0;
	int th = 0, tm = 0, minutes = 0;
	int money;

	minutes = time_pass(starth, startm, endh, endm, th, tm);

	money = charge(minutes);
	printf("���� ��� : %d��", money);
}