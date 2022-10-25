#include<stdio.h>

int input_int2(int max);

int main(void)
{
	int i;
	
	i = input_int2(10);
	printf("“ü—Í‚µ‚½‚Ì‚Í%d‚Å‚·", i);
	
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