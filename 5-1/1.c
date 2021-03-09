#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int i, j, count = 0, sum = 0;
	for (i = 0; i < 10;i++)
	{
		if (a[i]!=0)
		{
			count++;
		}
		if (count%3==0 && a[i]!=0)
		{
			count = 0;
			a[i] = 0;
			sum++;
		}
		if (sum == 9)
		{
			for (j = 0; j < 10;j++)
			{
				if (a[j] != 0)
				{
					printf("最后一位同学编号为:%d\n",a[j]);
				}
			}
			return 0;
		}
		if (i == 9)
		{
			i = -1;
		}
	

	}
	return 0;
}
