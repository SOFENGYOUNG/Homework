#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("*****Time*****\n");
	printf("1   morning\n");
	printf("2   afternoon\n");
	printf("3   night\n");
	printf("Pleace enter your choice:");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
		printf("Good morning\n");
		break;
	case 2:
		printf("Good afternoon\n");
		break;
	case 3:
		printf("Good night\n");
		break;
	default :
		printf("Selection error\n");
	}
	return 0;
}