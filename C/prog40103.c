#include <stdio.h>
#include <string.h>

int main(void)
{
	char c;
	char str[20];
	int i, j = 0;
	
	printf("文字=");
	scanf("%c", &c);
	
	printf("文字列=");
	scanf("%s", str);
	
	for (i = 0; i < strlen(str); i++){
		if (str[i] == c){
			j++;
		}
	}
	
	printf("文字数=%d\n", j);
	
	return (0);
}