#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[5][6], b[6][5];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-4d", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}