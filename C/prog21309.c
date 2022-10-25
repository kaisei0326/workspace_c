#include<stdio.h>

int keta(int n);

int main(void)
{
	int a;
	
	printf("®”=");
	scanf("%d", &a);
	
	printf("%dŒ…‚Å‚·\n", keta(a));
	return(0);
}

int keta(int n){
	int a=0;
	while(n > 0){
		n /= 10;
		a++;
	}
	return(a);
}