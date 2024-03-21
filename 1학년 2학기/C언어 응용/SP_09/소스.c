#include <stdio.h>
#include<ctype.h>
char* substitution_cipher(int shift, char text[], int length);
char* substitution_cipher(int shift, char text[], int length)
{
	char* cipher;
	int i;

	cipher = (char*)malloc(length + 1);
	if (cipher == NULL)
	{
		printf("메모리 부족!\n");
		exit(1);
	}
	
	memset(cipher, 0, length);

	for (i = 0; i < length; i++)
	{
		if (isalpha(cipher[i] + 'a'))
			cipher[i] = toupper(cipher[i] + 'a');
		else
			continue;
	}
	return cipher;
}
void main()
{
}