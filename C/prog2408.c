#include<stdio.h>
int main(void)
{
	int a;
	printf("�N��=");
	scanf("%d", &a);
	
	if((a <= 12) && (a >= 7)){
		printf("���w���ł�\n");
	}
	else{
		printf("���w���ł͂���܂���\n");
	}
	return(0);
}