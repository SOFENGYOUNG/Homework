#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	void Fun(int a);
	int i;
	for (i = 10; i < 100;i++)
	{
		Fun(i);
	}
	return 0;
}
void Fun(int a)
{
	int i, tem;
	for (i = 2; i < a;i++)
	{
		if (a%i==0)
		{
			break;
		}
	}
	if (i==a)
	{
		tem = (a%10*10+a/10);
		for (i = 2; i < tem;i++)
		{
			if (tem%i==0)
			{
				break;
			}
		}
		if (i==tem)
		{
			printf("%-4d",a);
		}
	}
}