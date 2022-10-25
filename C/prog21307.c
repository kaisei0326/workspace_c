#include<stdio.h>

void guusu(int n);

int main(void)
{
	int i;
	printf("®”=");
	scanf("%d", &i);
	
	guusu(i);
	
	return(0);
}

void guusu(int n)
{
	int a;
	
	for(a = 2;a <= n;a++){
		if(a % 2 == 0){
			printf("%d\n", a);
		}
	}
	return(a);
}