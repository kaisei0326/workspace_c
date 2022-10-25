#include<stdio.h>
int main(void)
{
	int a;
	printf("西暦=");
	scanf("%d", &a);
	
	if(a % 4 == 0){
		printf("今年はオリンピックがあります\n");
	}
	else{
		printf("今年はオリンピックはありません\n");
	}
	return(0);
}