#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{			
		if (ch>=65 && ch<=91)
		{
			ch += 32;
			putchar(ch);
		}
		else if (ch>=97 && ch<=122)
		{
			ch -= 32;
			putchar(ch);
		}
		else if (ch < 65 || ch > 91 && ch < 97 || ch > 122)
		{
			ch = ch;
			putchar(ch);
		}
	}
	return 0;
}