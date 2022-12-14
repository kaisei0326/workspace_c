#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_LEN 20

char *longest_string(char str[][MAX_STRING_LEN], int num);

int main(void)
{
	char (*str)[MAX_STRING_LEN];
	char *longest;
	int string_num;
	int i;
	
	printf("文字列数=");
	scanf("%d", &string_num);
	
	str = (char (*)[MAX_STRING_LEN])malloc(string_num * MAX_STRING_LEN * sizeof(char));
	
	for (i = 0; i < string_num; i++){
		printf("文字列%d=", i + 1);
		scanf("%s", str[i]);
	}
	
	longest = longest_string(str, string_num);
	
	printf("最長文字列=%s\n", longest);
	
	return (0);
}

char *longest_string(char str[][MAX_STRING_LEN], int num)
{
	char *anc;
	int i;
	
	anc = str[0];
	for (i = 1; i < num; i++){
		if (strlen(anc) < strlen(str[i])){
			anc = str[i];
		}
	}
	return (anc);
}