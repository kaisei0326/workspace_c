#include <stdio.h>

int main(void)
{
	char str[20];
	int no;
	int i, j;
	
	printf("•¶Žš—ñ>> ");
	scanf("%s", str);
	
	printf("‰ñ”>> ");
	scanf("%d", &no);
	
	for (i = 0; i < no; i++){
		for (j = 0; j < strlen(str); j++){
			printf("%c", str[j]);
		}
		printf("\n");
	}
	
	return (0);
}