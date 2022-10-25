#include<stdio.h>

void hello2(int kaisuu);

int main(void)
{
	int n;
	printf("‰ñ”=");
	scanf("%d", &n);
	hello2(n);
	
	return(0);
}

void hello2(int kaisuu)
{
	while(kaisuu != 0){
		printf("Hello, World!\n");
		kaisuu--;
	}
}
