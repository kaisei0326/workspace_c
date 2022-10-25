#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b;
	float av;
	int i;
	
	scanf("%f %f", &a, &b);
	
	av = a + b;
	av /= 2;
	
	i = (int)(av + 0.5);
	
	printf("%d\n", i);
	
	return (0);
}