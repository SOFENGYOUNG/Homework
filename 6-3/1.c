#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char* str[5];
	int i;
	printf("���������ͬѧ������:");
	for (i = 0; i<5; i++)
	{
		str[i] = (char*)malloc(50);
		scanf("%s", str[i]);
	}
	for (i = 0; i<5; i++)
	{
		if (strcmp(str[0], str[i])>0)
		{
			str[0] = str[i];
		}
	}
	printf("���ֵ�˳��������ǰ���ѧ��������:%s\n", str[0]);
	return 0;
}
