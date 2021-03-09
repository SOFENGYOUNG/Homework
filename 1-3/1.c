#include <stdio.h>
#define PI 3.1415926536
int main()
{
	float a, b, c, r;
	printf("Input :");
	scanf_s("%f", &r);
	a = PI * r * r;
	b = 4 * PI * r * r;
	c = 4 * PI * r * r * r / 3;
	printf("area=%.10f\n", a);
	printf("surface a=%.10f\n", b);
	printf("volume=%.10f\n", c);
	return 0;
}