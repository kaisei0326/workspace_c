#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("x=");
	scanf("%d", &a);
	
	c = 0;
	for (b = 1; b <= a; b++){
		c += b;
	}
	printf("1����%d�܂ł̍��v��%d�ł�\n", b - 1, c);
	return(0);
}