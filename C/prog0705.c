#include<stdio.h>
int main(void)
{
    int futaketa;
	int suuji;
	
	suuji = 283;
	futaketa = (suuji / 10) % 10;
	
	printf("%dの２行目の数字は%dです\n", suuji, futaketa);
	
	return(0);
}