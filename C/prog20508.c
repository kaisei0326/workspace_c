#include<stdio.h>

int main()
{
	char str[100];
	int a;
	
	printf("������=");
	scanf("%s", str);
	
	a = 0;
	
	while(str[a] != '\0'){
		if((str[a] >= 'a') && (str[a] <= 'z')){
			str[a] -= 32;
		}
		a++;
	}
	printf("%s\n", str);
	return(0);
}