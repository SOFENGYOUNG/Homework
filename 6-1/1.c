#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int Fun(int x);
	int a;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	if (Fun(a))
	{
		printf("%d是素数\n",a);
	}
	else
	{
		printf("%d不是素数\n",a);
	}
	return 0;
}
int Fun(int x)
{
	int i = 2;
	for (; i <= x - 1;i++)
	if (x%i == 0)
		return 0;
	return 1;
}