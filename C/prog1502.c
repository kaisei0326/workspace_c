#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((a <= 0) || (a > 100)){
		printf("aは0以下または１００より大きい数です\n");
	}
	else {
		printf("aは１００以下の自然数です\n");
	}
	return (0);
}