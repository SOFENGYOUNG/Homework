#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Fun(int s[],int n)
{
	int i, j = 0, max;
	for (i = 0,max=s[0]; i < n;i++)
	{
		if (s[i]>max)
		{
			max = s[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		if (max==s[i])
		{
			j = i;
		}
	}
	return j;
}
void main()
{
	int a[10] = { 876, 675, 896, 101, 301, 401, 980, 431, 451, 777 },k;
	k = Fun(a,10);
	printf("%d,%d\n",k,a[k]);
}