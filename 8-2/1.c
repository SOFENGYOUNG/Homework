#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 80
int Fun(char *str)
{
	int a = strlen(str);
	int i;
	for (i = 0; i < a / 2;i++)
	{
		if (str[i]!=str[a-1-i])
		{
			return 0;
		}
		
	}
	return 1;
}
main()
{
	char s[N];
	char *test[] = { "1234321", "123421", "123321", "abcdCBA" };
	int i;
	printf("Enter a string : ");
	gets(s);
	printf("\n\n");
	puts(s);
	if (Fun(s))
		printf("YES\n");
	else
		printf("NO\n");
	//²âÊÔ
	for (i = 0; i < 4; i++)
	{

		if (Fun(test[i]))
			printf("YES\n");
		else
			printf("NO\n");
		// ²âÊÔ½áÊø
	}
}
