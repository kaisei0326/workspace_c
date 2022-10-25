#include <stdio.h>

int n;
	
void printnum(void);
	
int main(void)
{
	printf("‰ñ”=");
	scanf("%d", &n);
	
	printnum();
	
	return (0);
}

void printnum(void)
{
	int i;
	
	for (i = 0; i < n; i++){
		printf("Hello, World!\n");
	}
}