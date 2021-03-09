#include <stdio.h>
int main()
{
	int a, b,c,d,e,f;
	printf("The first number:");
	scanf_s("%d",&a);
	printf("The second number:");
	scanf_s("%d",&b);
	c = a + b;
	d = a - b;
	e = a * b;
	printf("%d+%d=%d\n",a,b,c);
	printf("%d-%d=%d\n",a,b,d);
	printf("%d*%d=%d\n",a,b,e);
	if (b == 0)
	{
		printf("error number");
	}
	else
	{
		f = a / b;
		printf("%d/%d=%d\n",a,b,f);
	}
	printf("\n");
	return 0;
}