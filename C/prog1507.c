#include<stdio.h>
int main(void)
{
	int a;
	
	printf("賛成者数=");
	scanf("%d", &a);
	
	if((21 <= a) && (a <= 41)){
		printf("多数決で可決しました。\n");
	}
	else{
		printf("否決しました。\n");
	}
	return(0);
}
	