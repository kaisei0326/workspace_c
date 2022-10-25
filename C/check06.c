#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int n;
	
	scanf("%s", str);
	
	n = strlen(str);
	
	printf("%d\n", n);
	return (0);
}