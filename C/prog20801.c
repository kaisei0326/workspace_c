#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int a;
	
	printf("������=");
	scanf("%s", str);
	
	a = strlen(str);
	
	printf("����=%d\n", a);
	return(0);
}