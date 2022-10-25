#include<stdio.h>

void hyouji(char mojiretsu[]);

int main(void)
{
	char str[100];
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	hyouji(str);
	
	return(0);
}

void hyouji(char mojiretsu[])
{
	printf("%s", mojiretsu);
}