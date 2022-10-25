#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if (a % 2 != 0){
		printf("a‚Í‹ô”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	else {
		printf("a‚Í‹ô”‚Å‚·\n");
	}
	return (0);
}