#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_LEN 20

char *alloc_str(char *str);

int main(void)
{
	char str[MAX_STRING_LEN];
	char *str1;
	char *str2;
	
	printf("•¶Žš—ñ=");
	scanf("%s", &str);
	
	str1 = alloc_str(str);
	
	printf("•¶Žš—ñ=");
	scanf("%s", &str);
	
	str2 = alloc_str(str);
	
	printf("•¶Žš—ñ1=%s\n", str1);
	printf("•¶Žš—ñ2=%s\n", str2);
	
	free(str1);
	free(str2);
	
	return (0);
}

char *alloc_str(char *str)
{
	char *alloc;
	
	alloc = (char *)malloc(MAX_STRING_LEN * sizeof(char));
	
	strcpy(alloc, str);
	
	return (alloc);
}