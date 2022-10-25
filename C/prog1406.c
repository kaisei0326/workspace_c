#include<stdio.h>

int main(void)
{
	int a;
	printf("1~10‚Ì®”=");
	scanf("%d", &a);
	
	if(a < 11 && a >= 1){
		printf("³‰ğ‚Å‚·\n");
	}
	else{
		printf("ŠÔˆá‚¢‚Å‚·\n");
	}
	return(0);
}