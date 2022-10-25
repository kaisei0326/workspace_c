#include<stdio.h>

int main(void)
{
	int a;
	char str[100];
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	
	a = 0;
	while(str[a] != '\0'){
		if(a % 2 == 0){
			printf("%c\n", str[a]);
	}
	a++;
	}
	return(0);
}