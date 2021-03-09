#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	long Fun(int a);
	long fib;
	int n;
	printf("Input n:");
	scanf("%d", &n);
	fib = Fun(n);
	printf("fib=%d\n\n",fib);
}
long Fun(int a)
{
	int i;
	int sum = 0;
	if (a==0)
	{
		return 0;
	}
	else if (a==1)
	{
		return 1;
	}
	else
	{
		for (i = 1; i <= a;i++)
		{
			sum = (Fun(i-1)) + (Fun(i-2));
		}
		return sum;
	}
}