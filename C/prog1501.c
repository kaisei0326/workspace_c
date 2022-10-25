#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((0 < a) && (a <= 100)){
		printf("a‚Í‚P‚O‚OˆÈ‰º‚ÌŽ©‘R”‚Å‚·\n");
	}
	else {
	printf("a‚Í•‰‚Ü‚½‚Í‚P‚O‚O‚æ‚è‘å‚«‚¢”‚Å‚·\n");
	}
	return (0);
}