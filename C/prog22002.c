#include<stdio.h>

int main(void)
{
	int x;
	int *p;
	
	p = &x;
	
	*p = 100;
	
	printf("x�̃A�h���X=%d\n", &x);
	printf("�̃T�C�Y=%d\n", sizeof(x));
	printf("x�̒l=%d\n", x);
	
	return (0);
}