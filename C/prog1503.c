#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if (a % 2 != 0){
		printf("a�͋����ł͂���܂���\n");
	}
	else {
		printf("a�͋����ł�\n");
	}
	return (0);
}