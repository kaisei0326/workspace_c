#include <stdio.h>

int main(void)
{
	char d;
	int i;
	
	printf("整数=");
	scanf("%d", &d);
	
	if ((d & 0x80) == 0){
		printf("正の数です\n");
	}
	else {
		printf("負の数です\n");
	}
	
	return (0);
}