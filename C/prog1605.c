#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("•b=");
	scanf("%d", &a);
	
	b = a % 60;
	c = a / 60;
	
	printf("%d•b‚Í%d•ª%d•b‚Å‚·", a, c, b);
	return(0);
}