#include<stdio.h>

int main(void)
{
	char str[100];
	int a;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	a = 0;
	while(str[a] != '\0'){
		if(!((str[a] >= '0') && (str[a] <= '9'))){
			printf("%c", str[a]);
		}
		a++;
	}
	printf("\n");
	return(0);
}