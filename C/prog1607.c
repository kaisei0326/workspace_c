#include<stdio.h>
int main(void)
{
	int a[4];
	printf("���l�i�R���j=");
	scanf("%d", &a[0]);
	
	a[1] = a[0] / 100;
	a[2] = a[0] % 100 / 10;
	a[3] = a[0] % 10;
	printf("�P�O�O�̈�=%d\n", a[1]);
	printf("�P�O�̈�=%d\n", a[2]);
	printf("�P�̈�=%d\n", a[3]);
	
	return(0);
}