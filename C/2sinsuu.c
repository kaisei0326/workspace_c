#include<stdio.h>

int sin2(int i);

int main(void)
{
	int i;
	printf("®”=");
	scanf("%d", &i);
	printf("%d", sin2(i));
	
	return(0);
}

int sin2(int i)
{
	int j=0, k=1;
	while(i > 0){
		j += (i % 2) * k;
		i /= 2;
		k *= 10;
	}
	return(j);
}