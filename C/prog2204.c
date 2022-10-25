#include <stdio.h>

int main(void)
{
	int i;              //ŒJ‚è•Ô‚µ‚Ì•Ï”
	int sum;            //‡Œv‚ğo‚·‚½‚ß‚Ì•Ï”
	
	sum = 0;
	for (i = 1; i <= 10; i++){       //10‰ñŒJ‚è•Ô‚·
		sum += i;
	}
	printf("1‚©‚ç10‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n", sum); //Œ‹‰Ê
	return (0);
}