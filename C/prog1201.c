#include <stdio.h>

int main(void)
{
	float a;
	float b;
	float c;
	float p;
	float q;

	printf("ax2 + bx + c\n");
	printf("a=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("c=");
	scanf("%f", &c);
	
	p = -1 * b / 2 * a;
	q = -1 * (b * b - 4 * a * c) / (4 * a);
	
	printf("ax2 + bx + c = a (x2 - (%f))2 - (%f)\n", p, q);
	printf("’¸“_‚Í(%f, %f)\n", p, q);
	
	return (0);
}