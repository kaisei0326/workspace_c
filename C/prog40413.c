#include <stdio.h>

#define ABS (i > 0) ? i : i * (-1)

int main(void)
{
	int i;
	
	printf("����=");
	scanf("%d", &i);
	
	i = ABS;
	
	printf("��Βl=%d\n", i);
	
	return (0);
}