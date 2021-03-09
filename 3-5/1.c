#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, n, i;
	int sum = 0,b = 0;
	printf("Please input a&n:");
	scanf("%d %d",&a,&n);
	for (i = 0; i < n;i++)
	{
		b += a;
		a = a * 10;
		sum += b;
	}
	printf("sum=%d\n",sum);
	return 0;
}