#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("整数=");
	scanf("%d", &a);
	
	c = 0;
	for(b=2;b<a;b++){
		if((a % b) == 0){
			c = 1;
			break;
		}
	}
	
	
	if(c == 0){
			printf("素数です\n");
	}
	else{
		printf("素数ではありません\n");
	}
	return(0);
}