#include<stdio.h>
int main(void)
{
    int futaketa;
	int suuji;
	
	suuji = 283;
	futaketa = (suuji / 10) % 10;
	
	printf("%d�̂Q�s�ڂ̐�����%d�ł�\n", suuji, futaketa);
	
	return(0);
}