#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[10];
	int i, j;
	printf("请输入你想输入的十个数字:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		printf("%4d", a[i]);
	}
	printf("\n");
	for (j = 9; j >= 0; j--)
	{
		printf("%4d", a[j]);
	}
	printf("\n");
	return 0;
}