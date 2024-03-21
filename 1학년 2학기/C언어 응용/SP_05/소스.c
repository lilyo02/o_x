#include <stdio.h>
void main()
{
	int ch;
	int len, max = 0;
	printf("가장 긴 단어의 길이 찾기\n");
	printf("단어 입력\n");

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

	printf("가장 긴 단어의 길이 : %d", max);
}