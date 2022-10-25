#include<stdio.h>

int main(void)
{
	char str[100];
	int a;
	a = 0;
	
	printf("•¶š—ñ=");
	scanf("%s", str);
	
	while(str[a] != '\0'){
		
	
	if((str[a] >= 'a') && (str[a] <= 'z')){
		str[a] -= 0x20;
	}
	else if((str[a] >= 'A') && (str[a] <= 'Z')){
		str[a] += 0x20;
	}
	a++;
	}
	printf("%s\n", str);
	return(0);
}