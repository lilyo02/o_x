#include <stdio.h>
void main()
{
	int ch;
	int len, max = 0;
	printf("���� �� �ܾ��� ���� ã��\n");
	printf("�ܾ� �Է�\n");

	while(1)
	{
		len = 0;
		ch = getchar();

		while ((ch != EOF) && (ch != '\n'))
		{
			len++;
			ch = getchar();
		}
		if (len > max)
			max = len;
		
		if (ch == EOF)
			break;
	}

	printf("���� �� �ܾ��� ���� : %d", max);
}