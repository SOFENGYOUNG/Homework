#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c,max;
	printf("������������Ҫ�Ƚϵ�����:");
	scanf("%d %d %d",&a,&b,&c);
	max = a > c ? a: c;
	max = b > max ? b : max;
	printf("max=%d",max);
	return 0;
}