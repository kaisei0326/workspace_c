#include<stdio.h>
int main(void)
{
	int x, i, a;
	
	printf("x=");
	scanf("%d", &x);
	
	a = 0;
	
	for (i = 2; i <= x; i += 2){
		a +=i;
	}
	printf("%d�ȉ��̋����̍��v��%d�ł�\n", x, a);
	return(0);
}