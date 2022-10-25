#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	int a;
	
	scanf("%s", str);
	
	a = strlen(str);
	
	while (a != 0){
		printf("%c", str[a - 1]);
		a--;
	}
	printf("\n");
	
	return (0);
}