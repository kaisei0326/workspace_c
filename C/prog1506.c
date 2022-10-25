#include<stdio.h>
int main(void)
{
	int a;
	
	printf("®”");
	scanf("%d", &a);
	
	if(!(a % 5 == 0)){
		printf("5‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñ\n");
	}
	else{
		printf("5‚ÅŠ„‚èØ‚ê‚Ü‚·\n");
	}
	return(0);
}