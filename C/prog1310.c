#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("•—‘¬‚Æ1ŠÔ‰J—Ê‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	printf("•—‘¬(m/s)=");
	scanf("%d", &a);
	printf("ˆêŠÔ‰J—Ê(mm)=");
	scanf("%d", &b);
	
	c = 0;
	
	if(a >= 25){
		printf("–\•—Œx•ñ\n");
		c = 1;
	}
	else if(a >= 15){
		printf("‹­•—’ˆÓ•ñ\n");
		c = 1;
	}
	
	if(b >=60){
		printf("‘å‰J’ˆÓ•ñ\n");
		c = 1;
	}
	else if(b >= 40){
		printf("‘å‰J’ˆÓ•ñ\n");
		c = 1;
	}
	
	if(c = 0){
		printf("’ˆÓ•ñEŒx•ñ‚Í‚ ‚è‚Ü‚¹‚ñ^n");
	}
	return(0);
}