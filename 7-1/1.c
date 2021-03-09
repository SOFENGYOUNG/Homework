#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float Fun(int a)
{
	int i;
	float j;
	float sum = 0.0;
	for (i = 1,j = 0; i <= a;i++)
	{	
		j += i;
		sum +=(1 / j);
	}
	return sum;
}
void main()
{
	int n;
	float s;
	printf("\nPlease enter N:");
	scanf("%d",&n);
	s = Fun(n);
	printf("The result is %f\n",s);
}
