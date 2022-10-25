#include <stdio.h>
#include <string.h>

int main(void)
{
	char c;
	char str[20];
	int i, j = 0;
	
	printf("•¶Žš=");
	scanf("%c", &c);
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	for (i = 0; i < strlen(str); i++){
		if (str[i] == c){
			j++;
		}
	}
	
	printf("•¶Žš”=%d\n", j);
	
	return (0);
}