#include<stdio.h>

int main(void)
{
	int a[10];
	printf("文字列=");
	scanf("%s", a);
	
	a[0] = '\0';
	
	printf("空文字列にしました。\n");
	
	printf("文字列=%s\ns", a);
	
	return(0);
}