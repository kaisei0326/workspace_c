#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("������������͂��܂���:");
	scanf("%d", &a);

	b = 0;
	while(!a == 0){
		printf("����=");
		scanf("%d", &c);
		b = b + c;
		a--;
	}
	printf("���v=%d\n", b);
	return(0);
}