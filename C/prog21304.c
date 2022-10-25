#include<stdio.h>

int uruu(int year);

int main(void)
{
	int y;
	
	printf("年=");
	scanf("%d", &y);
	
	if(uruu(y) == 0){
		printf("%d年はうるう年ではありません");
	}
	else{
		printf("%d年はうるう年です");
	}
	return(0);
}

int uruu(int year)
{
	int a = 0;
	if(year % 400 == 0){
		a++;
	}
	else if(year % 4 == 0 && year % 100 != 0){
		a++;
	}
	return(a);
}