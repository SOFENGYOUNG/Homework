#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i,j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-4d",i,j,i*j);
		}
		printf("\n");
	
	}
	printf("----------------------------------------------------------------------\n");
	for (i = 1; i < 10; i++)
	{
		for (j = i; j <10; j++)
		{
			printf("%d*%d=%-4d", i, j, i*j);
		}
		printf("\n");

	}
	return 0;
}