#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		if (i==(pow(i/100,3)+pow(i%100/10,3)+pow(i%100%10,3)))
		{
			printf("%d 是水仙花数\n",i);
		}	
	}
	return 0;
}