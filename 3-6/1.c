#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	void Fun(int a);
	int i;
	for (i = 1; i < 1000;i++)
	{
		Fun(i);
	}
	return 0;
}
void Fun(int a)
{
	int i, j;
	for (i = 1,j = 0; i < a;i++)
	{
		if (a%i==0)
		{
			j += i;
		}
		else
		{
			;
		}
		
	}
	if (j==a)
	{
		printf("%d\n",i);
	}
	else
	{
		;
	}
}