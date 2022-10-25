#include<stdio.h>
#include<string.h>

char str[40];

void str_input2(char str[]);
void str_add(char str1[], char str2[]);

int main(void)
{
	char str1[20];
	char str2[20];
	
	str_input2(str1);
	str_input2(str2);
	
	str_add(str1, str2);
	
	printf("˜AŒ‹•¶š—ñ=%s\n", str);
	
	return(0);
}

void str_input2(char str[])
{
	printf("•¶š—ñ=");
	scanf("%s", str);
}

void str_add(char str1[], char str2[])
{
	strcpy(str,str1);
	strcat(str,str2);
}