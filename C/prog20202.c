#include<stdio.h>

int main(void)
{
	int a, b;
	int c;
	printf("������=");
	scanf("%s", a);
	printf("�\����=");
	scanf("%d", &b);
	for(c = 0;c < b;c++){
		printf("%s\n", a);
	}
	return(0);
}