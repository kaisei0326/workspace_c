#include<stdio.h>

int out4in5(int i);

int main(void)
{
	int i;
	
	printf("®”’l‚ğ“ü—Í");
	scanf("%d", &i);
	
	printf("%d‚Ì’l‚ğ‚P‚ÌˆÊ‚ÅlÌŒÜ“ü‚·‚é‚Æ%d‚É‚È‚è‚Ü‚·", i, out4in5(i));
	
	return(0);
}

int out4in5(int i)
{
	if(i % 10 < 5){
		i = (i / 10) * 10;
	}
	else{
		i = (i / 10) * 10 + 10;
	}
	return(i);
}