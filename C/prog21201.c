#include<stdio.h>

int abs(int x)
{
	if(x < 0){
		x *= -1;
	}
	return(x);
}

int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	
	printf("��Βl��%d�ł�", abs(a));
	
	return(0);
}