#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int Fun(int x);
	int a;
	printf("������һ��������:");
	scanf("%d",&a);
	if (Fun(a))
	{
		printf("%d������\n",a);
	}
	else
	{
		printf("%d��������\n",a);
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