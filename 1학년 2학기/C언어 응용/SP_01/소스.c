#include <stdio.h>
void main()
{
	int n;
	double x, y, z;

	printf("1 : �ﰢ��, 2 : �簢��, 3 : ��ٸ����� ���\n");
	printf("��ȣ�� �Է� : ");
	scanf_s("%d", &n);

	switch (n)
	{
	case 1:
		printf("�ﰢ���� ���� ���\n");
		printf("�غ��� ���̸� �Է� : ");
		scanf_s("%lf\n", &x);
		printf("������ ���̸� �Է� : ");
		scanf_s("%lf\n", &y);

		z = x * y % 2;
		printf("�ﰢ���� ���̴� %lf", z);
		break;

	case 2:
		printf("�簢���� ���� ���\n");
		printf("�غ��� ���̸� �Է� : ");
		scanf_s("%lf\n", &x);
		printf("������ ���̸� �Է� : ");
		scanf_s("%lf\n", &y);

		printf("�簢���� ���̴� %lf", x * y);
		break;

	case 3:
		printf("��ٸ����� ���� ���\n");
		printf("�غ��� ���̸� �Է� : ");
		scanf_s("%lf\n", &x);
		printf("������ ���̸� �Է� : ");
		scanf_s("%lf\n", &y);
		printf("������ ���̸� �Է� : ");
		scanf_s("%lf\n", &z);

		printf("�簢���� ���̴� %lf", (x + y) * z % 2);
		break;

	default:
		printf(" 1���� 3 ������ ���ڸ� �Է����ּ���!");
	}
}