#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	
	if(a == b){
		printf("a��b�̍��̐�Βl��0�ł�\n");
	}
	else if(a > b){
	c = a - b;	
	printf("a��b�̍��̐�Βl��%d�ł�\n", c);
	}
	else if(a < b){
		c = b - a; 
 		printf("a��b�̍��̐�Βl��%d�ł�\n", c);
	}
	return(0);
}