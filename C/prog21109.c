#include<stdio.h>

int bai(int n, int i)
{
	return(n * i);
}

int main(void)
{
	int n;
	int num[10];
	int i;
	
	printf("®” = ");
	scanf("%d", &n);
	
	for(i = 0; i < 10; i++){
		num[i] = bai(n, i + 1); //ŠÖ”‚ÌŒÄ‚Ño‚µ;
	}
	
	for(i = 0;i < 10;i++){
		printf("%2d  * %2d = %2d\n", n, i + 1, num[i]);
	}
	
	return(0);
}