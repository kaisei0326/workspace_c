#include<stdio.h>

int main(void)
{
	int i;
	printf("西暦=");
	scanf("%d", &i);
	
	if(i % 400 == 0){
		printf("うるう年です\n");
	}
	else if(i % 100 == 0){
		printf("うるう年ではありません\n");
	}
	else if(i % 4 == 0){
		printf("うるう年です\n");
	}
	else{
		printf("うるう年ではありません\n");
	}
	return(0);
}