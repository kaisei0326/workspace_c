#include<stdio.h>

void sankaku(int hen);

int main(void)
{
	int a;
	printf("•Ó=");
	scanf("%d", &a);
	
	sankaku(a);
	
	return(0);
}

void sankaku(int hen)
{
	int a=0, b;
	while(a < hen){
		for(b = 0;b <= a;b++){
			printf("*");
		}
		a++;
		printf("\n");
	}
}