#include <stdio.h>

int main(void)
{
	char d;
	int i;
	
	printf("����=");
	scanf("%d", &d);
	
	if ((d & 0x80) == 0){
		printf("���̐��ł�\n");
	}
	else {
		printf("���̐��ł�\n");
	}
	
	return (0);
}