#include<stdio.h>

int main(void)
{
	int a, b=0, c;
	printf("x=");
	scanf("%d", &c);
	for(a = 1;a<= c;a++){
		b += a;
	}
	printf("1����%d�܂ł̍��v��%d�ł�\n", c, b);
	return 0;
}