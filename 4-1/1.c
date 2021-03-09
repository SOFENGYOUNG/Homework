#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()	
{
	int a[10],t,i,j;
	
	for (i = 0; i < 10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < 10;i++)
	{
		printf("%4d", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 9;i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[j]>a[i])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}	
	}
	for (i = 0; i < 10; i++)
	{

		printf("%4d", a[i]);
	}
	putchar('\n');
	return 0;
}