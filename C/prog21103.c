#include<stdio.h>

int nibai(int x)
{
	return(x * 2);
}

int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	
	printf("2�{�̐���%d�ł�\n", nibai(a));
	
	return(0);
}