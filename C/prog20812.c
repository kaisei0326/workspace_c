#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("•¶Žš—ñ‚P=");
	scanf("%s", str1);
	
	printf("•¶Žš—ñ‚Q=");
	scanf("%s", str2);
	
	if(strcmp(str1, str2) <= 0){
		printf("%s\n%s\n", str1, str2);
	}
	else if(strcmp(str1, str2) > 0){
		printf("%s\n%s\n", str2, str1);
	}
	return 0;
}