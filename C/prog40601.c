#include <stdio.h>

int main(void)
{
	char d;
	int i;
	
	printf("®”=");
	scanf("%d", &d);
	
	if ((d & 0x80) == 0){
		printf("³‚Ì”‚Å‚·\n");
	}
	else {
		printf("•‰‚Ì”‚Å‚·\n");
	}
	
	return (0);
}