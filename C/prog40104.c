#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len1, len2;
	char str1[20], str2[20], str3[40];
	
	printf("•¶Žš—ñ‚P=");
	scanf("%s", str1);
	printf("•¶Žš—ñ‚Q=");
	scanf("%s", str2);
	
	for(i = 0; i < strlen(str1); i++){
		str3[i] = str1[i];
	}
	for(i = 0; i < strlen(str2); i++){
		str3[strlen(str1) + i] = str2[i];
	}
	
	printf("%s\n", str3);
	
	return (0);
}