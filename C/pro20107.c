#include <stdio.h>

int main(void)
{
	int x;
	printf("�_��>> ");
	scanf("%d", &x);
	
	if (x >= 60){
		printf("���i\n");
	}
	else if (x < 60){
		printf("�s���i\n");
	}
	return (0);
}