#include<stdio.h>
int main(void)
{
	char a;
	
	printf("=");
	scanf("%c", &a);
	
	if(a == 'z'){
		a = 'a';
	}
	else{
		a = a+1;
	}
	printf("%c\n", a);
	
	return(0);
}