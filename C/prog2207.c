#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("n=");
	scanf("%d", &a);
	
	c = 0;
	b = 1;
	
	while (b <= a){
		c = b;
		if(!(c % 2 == 0)){
		printf("%d\n", c);
		}
		b++;
	}
	return(0);
}