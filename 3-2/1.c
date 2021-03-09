#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 1;
	while (i <= 99)
	{
		sum += i * (i + 1);
		i += 2;
	}
	printf("sum=%d\n",sum);
	return 0;
}