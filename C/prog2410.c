#include<stdio.h>
int main(void)
{
	int a, b;
	printf("x=");
	scanf("%d", &a);
	
	for(b = 1; b <= a; b++){
		if(b % 3 == 0){
			printf("%d\n", b);
		}
	}
	return(0);
}