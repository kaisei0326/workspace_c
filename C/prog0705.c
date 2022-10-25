#include<stdio.h>
int main(void)
{
    int futaketa;
	int suuji;
	
	suuji = 283;
	futaketa = (suuji / 10) % 10;
	
	printf("%d‚Ì‚Qs–Ú‚Ì”š‚Í%d‚Å‚·\n", suuji, futaketa);
	
	return(0);
}