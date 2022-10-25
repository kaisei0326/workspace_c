#include<stdio.h>

void kuku(int i);

int main(void)
{
	int i;
	
	printf("‚Ç‚±‚Ü‚Å‚Ì‹ã‹ã‚ğ•\¦‚µ‚Ü‚·‚©H:");
	scanf("%d", &i);
	
	kuku(i);
	
	return(0);
}

void kuku(int i)
{
	int a, b;
	for(a=1;a<=i;a++){
		printf("%4d", a);
		for(b=2;b<=i;b++){
			printf("%4d", a*b);
		}
		printf("\n");
	}
}