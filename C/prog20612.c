#include<stdio.h>

int main(void)
{
	char  str[100];
	int a;
	printf("学籍番号=");
	scanf("%s", str);
	
	a = (str[6] - '0') * 10 + str[7] - '0';
	
	printf("%d\n", a);
	if(a % 3 == 0){
		printf("3で割り切れます\n");
	}
	else{
		printf("3で割り切れません\n");
	}
	return(0);
}