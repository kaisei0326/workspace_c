#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("®”‚ğ‰½‰ñ“ü—Í‚µ‚Ü‚·‚©:");
	scanf("%d", &a);

	b = 0;
	while(!a == 0){
		printf("®”=");
		scanf("%d", &c);
		b = b + c;
		a--;
	}
	printf("‡Œv=%d\n", b);
	return(0);
}