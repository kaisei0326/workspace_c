#include<stdio.h>

int uruu(int year);

int main(void)
{
	int y;
	
	printf("�N=");
	scanf("%d", &y);
	
	if(uruu(y) == 0){
		printf("%d�N�͂��邤�N�ł͂���܂���");
	}
	else{
		printf("%d�N�͂��邤�N�ł�");
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