#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Fun(int *s, int t, int *k)
{
	int i, max = *s;
	for (i = 0;i < t;i++)
	{
		if (max <*(s+i))
		{
			max = *(s + i);
		}
	}
	for (i = 0; i < t; i++)
	{
		if (max == *(s+i))
		{
			*k = i;
		}
	}

}
void main()
{
	int a[10] = { 876, 675, 896, 101, 301, 401, 980, 431, 451, 777 }, k;
	Fun(a, 10, &k);
	printf("%d, %d\n ", k, a[k]);
}
