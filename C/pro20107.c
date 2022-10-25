#include <stdio.h>

int main(void)
{
	int x;
	printf("“_”>> ");
	scanf("%d", &x);
	
	if (x >= 60){
		printf("‡Ši\n");
	}
	else if (x < 60){
		printf("•s‡Ši\n");
	}
	return (0);
}