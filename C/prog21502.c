#include<stdio.h>

int i, x;

void goukei(void);

int main(void)
{
	printf("�����l=");
	scanf("%d", &i);
	
	goukei();
	
	printf("1����%d�܂ł̍��v=%d\n", i, x);
	
	return(0);
}

void goukei(void)
{
	int a;
	for(a = 1;a <= i;a++){
		x += a;
	}
}