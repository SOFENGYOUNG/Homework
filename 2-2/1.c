#define _CRT_SECURE_NO_WARNINGS
#define EPS 1e-1
#include <stdio.h>
#include <math.h>	
int main()
{
	float a, b, c;
	int flag = 1;
	printf("请输入a , b , c:");
	scanf("%d %d %d",&a,&b,&c);
	if (a + b > c && b + c > a && a + c > b)
	{
		if (fabs(a - b) <= EPS && fabs(b - c) <= EPS && fabs(a - c) <= EPS)
		{
			printf("等边\n");
			flag = 0;
		}
		else if (fabs(a - b) <= EPS || fabs(b - c) <= EPS || fabs(a - c) <= EPS)
		{
			printf("等腰");
			flag = 0;
		}
		else if (fabs(a*a + b*b - c*c) <= EPS || fabs(b*b + c*c - a*a) <= EPS || fabs(a*a + c*c - b*b) <= EPS)
		{
			printf("直角");
			flag = 0;
		}
		if (flag)
		{
			printf("一般");
		}
		printf("三角形\n");
	}
	else
	{
		printf("不构成三角形\n");
	}
	return 0;
}