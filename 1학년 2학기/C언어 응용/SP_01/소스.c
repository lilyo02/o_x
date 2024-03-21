#include <stdio.h>
void main()
{
	int n;
	double x, y, z;

	printf("1 : 삼각형, 2 : 사각형, 3 : 사다리꼴을 계산\n");
	printf("번호를 입력 : ");
	scanf_s("%d", &n);

	switch (n)
	{
	case 1:
		printf("삼각형의 넓이 계산\n");
		printf("밑변의 길이를 입력 : ");
		scanf_s("%lf\n", &x);
		printf("높이의 길이를 입력 : ");
		scanf_s("%lf\n", &y);

		z = x * y % 2;
		printf("삼각형의 넓이는 %lf", z);
		break;

	case 2:
		printf("사각형의 넓이 계산\n");
		printf("밑변의 길이를 입력 : ");
		scanf_s("%lf\n", &x);
		printf("높이의 길이를 입력 : ");
		scanf_s("%lf\n", &y);

		printf("사각형의 넓이는 %lf", x * y);
		break;

	case 3:
		printf("사다리꼴의 넓이 계산\n");
		printf("밑변의 길이를 입력 : ");
		scanf_s("%lf\n", &x);
		printf("윗변의 길이를 입력 : ");
		scanf_s("%lf\n", &y);
		printf("높이의 길이를 입력 : ");
		scanf_s("%lf\n", &z);

		printf("사각형의 넓이는 %lf", (x + y) * z % 2);
		break;

	default:
		printf(" 1부터 3 사이의 숫자를 입력해주세요!");
	}
}