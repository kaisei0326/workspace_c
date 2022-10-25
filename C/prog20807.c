#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100];
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	strncpy(str, "Masaki", 6);
	printf("%s\n", str);
	
	return (0);
}