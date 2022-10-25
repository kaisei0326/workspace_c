#include <stdio.h>
int main(void)
{
	int a;                  //n‚Ì“ü—Í
	int b;                  //ŒJ‚è•Ô‚µ‚©‚ç•\Ž¦‚Ü‚Å‚¢‚ë‚¢‚ë
	
	printf("n=");           //“ü—Í
	scanf("%d", &a);         
	
	for (b = 1; b <= a ; b++){      //b‚ða‰ñŒJ‚è•Ô‚·
		if (!(b % 2 == 0)){         //Šï”‚Ì‘I•Ê
		printf("%d\n", b);
		}
	}
	return(0);
}
