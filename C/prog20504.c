#include<stdio.h>

int main(void)
{
	char str[100];
	int a;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	a = 0;
	while(str[a] != '\0'){
		if((str[a] >= 'A') &&(str[a] <= 'Z')){
			printf("%c", str[a]);
		}
		a++;
	}
	return(0);
}
