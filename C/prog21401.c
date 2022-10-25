#include<stdio.h>

float kai(int k);

int main(void)
{
	int i;
	
	printf("®”’l‚ğ“ü—Í : ");
	scanf("%d", &i);
	
	printf("%d‚ÌŠKæ‚Í%.0f‚É‚È‚è‚Ü‚·\n", i, kai(i));
	
	return(0);
}

float kai(int k)
{
	float l;
	
	if(k == 1){
		return(1);
	}
	l = kai(k - 1) * k;
	
	return(l);
}