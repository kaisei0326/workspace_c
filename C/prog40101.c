#include <stdio.h>

int main(void)
{
	char name[20];
	
	printf("名前=");
	scanf("%s", name);
	printf("あなたのお名前は %s さんですね\n", name);
	
	return (0);
}