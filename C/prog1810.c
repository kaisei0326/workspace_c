#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("����=");
	scanf("%d", &a);
	
	c = 0;
	for(b=2;b<a;b++){
		if((a % b) == 0){
			c = 1;
			break;
		}
	}
	
	
	if(c == 0){
			printf("�f���ł�\n");
	}
	else{
		printf("�f���ł͂���܂���\n");
	}
	return(0);
}