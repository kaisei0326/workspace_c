#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("�b=");
	scanf("%d", &a);
	
	b = a % 60;
	c = a / 60;
	
	printf("%d�b��%d��%d�b�ł�", a, c, b);
	return(0);
}