#include<stdio.h>

int main()
{
	char str[100];
	int a;
	int k;
	
	a = 0;
	
	printf("•¶š—ñ=");
	scanf("%s", str);
	
	while(str[a] != '\0'){
		a++;
	}
	
	for(k = a - 1;k >= 0;--k){
		printf("%c\n", str[k]);
	}
	
	return(0);
}