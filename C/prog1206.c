#include<stdio.h>
int main(void)
{
    int a;
	int b;
	int i;
	
	printf("a=");
	scanf("%d", &a);
	
	printf("b=");
	scanf("%d", &b);
	
	if(a > b){
		i = a - b;
	}
	else{
		i = b - a;
	}
	
	printf("a��b�̍��̐�Βl��%d�ł�", i);
	
	return(0);
}