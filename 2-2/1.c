#define _CRT_SECURE_NO_WARNINGS
#define EPS 1e-1
#include <stdio.h>
#include <math.h>	
int main()
{
	float a, b, c;
	int flag = 1;
	printf("������a , b , c:");
	scanf("%d %d %d",&a,&b,&c);
	if (a + b > c && b + c > a && a + c > b)
	{
		if (fabs(a - b) <= EPS && fabs(b - c) <= EPS && fabs(a - c) <= EPS)
		{
			printf("�ȱ�\n");
			flag = 0;
		}
		else if (fabs(a - b) <= EPS || fabs(b - c) <= EPS || fabs(a - c) <= EPS)
		{
			printf("����");
			flag = 0;
		}
		else if (fabs(a*a + b*b - c*c) <= EPS || fabs(b*b + c*c - a*a) <= EPS || fabs(a*a + c*c - b*b) <= EPS)
		{
			printf("ֱ��");
			flag = 0;
		}
		if (flag)
		{
			printf("һ��");
		}
		printf("������\n");
	}
	else
	{
		printf("������������\n");
	}
	return 0;
}