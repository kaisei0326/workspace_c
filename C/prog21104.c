#include<stdio.h>

int min(int x, int y)
{
	if(x < y){
		return(x);
	}
	else{
		return(y);
	}
}

int main(void)
{
	int a, b;
	
	printf("����1=");
	scanf("%d", &a);
	
	printf("����2=");
	scanf("%d", &b);
	
	printf("���������̒l��%d�ł�\n", min(a, b));
	
	return(0);
}