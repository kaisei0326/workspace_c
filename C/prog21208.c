#include<stdio.h>

int input_int2(int max);
void star(int a);

int main(void)
{
	int i;
	
	i = input_int2(10);
	star(i);
	
	return (0);
}

int input_int2(int max)
{
	int i;
	
	while(1){
	printf("10ˆÈ‰º‚Ì®”=");
	scanf("%d", &i);
	
	if(i <= max){
		break;
		}
	}
	return (i);
}

void star(int a)
{
	while(a > 0){
		printf("*");
		a--;
	}
	printf("\n");
}