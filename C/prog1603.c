#include<stdio.h>
int main(void)
{
	float a, b;
	printf("���C���`�ł���=");
	scanf("%f", &a);
	b = a * 2.54;
	printf("%.2f�C���`��%.2fcm�ł�\n", a ,b);
	return(0);
}