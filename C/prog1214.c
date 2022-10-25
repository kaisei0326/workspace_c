#include<stdio.h>
int main(void)
{
	int a;
	printf("西暦=");
	scanf("%d", &a);
	
	if(a % 400 == 0){
		printf("今年はうるう年です");
	}
	else if(a % 100 == 0){
		printf("ことしはうるう年ではありません");
	}
	else if(a % 4 == 0){
		printf("今年はうるう年です");
	}
	else{
		printf("ことしはうるう年ではありません");
	}
	return(0);
}