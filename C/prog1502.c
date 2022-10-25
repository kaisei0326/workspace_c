#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((a <= 0) || (a > 100)){
		printf("a‚Í0ˆÈ‰º‚Ü‚½‚Í‚P‚O‚O‚æ‚è‘å‚«‚¢”‚Å‚·\n");
	}
	else {
		printf("a‚Í‚P‚O‚OˆÈ‰º‚Ì©‘R”‚Å‚·\n");
	}
	return (0);
}