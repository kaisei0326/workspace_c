#include<stdio.h>
int main(void)
{
	int a, b;
	printf("®” ‚P=");
	scanf("%d", &a);
	
	printf("®” ‚Q=");
	scanf("%d", &b);
	
	if (a == b){
		printf("·‚Ìâ‘Î’l‚Í‚O‚Å‚·\n");
	}
	else if (a < b){
		printf("·‚Ìâ‘Î’l‚Í%d‚Å‚·\n", b - a);
	}
	else if (a > b){
		printf("·‚Ìâ‘Î’l‚Í%d‚Å‚·\n", a - b);
	}
	return(0);
}