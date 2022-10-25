#include<stdio.h>
int main(void)
{
	int a;
	printf("西暦＝");
	scanf("%d",&a);
	
	if(a % 400 == 0){
		printf("ことしはうるう年です\n");
	}
	else if(a % 100 == 0){
		printf("ことしはうるう年ではありません\n");
	}
	else if(a % 4 == 0){
		printf("ことしはうるう年です\n");
	}
	else{
		printf("ことしはうるう年ではありません");
	}
	return(0);
}