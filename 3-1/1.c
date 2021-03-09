#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int space = 0, number = 0,character = 0, other = 0;
	printf("ÇëÊäÈë×Ö·û´®:");
	while ((ch = getchar())!='\n')
	{
		if (ch==' ')
		{
			space++;
		}
		else if (ch>='0' && ch<='9')
		{
			number++;
		}
		else if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		{
			character++;
		}
		else
		{
			other++;
		}
	}
	printf("space:%d number:%d character:%d other:%d\n",space,number,character,other);
	return 0;
}