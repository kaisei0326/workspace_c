#include<stdio.h>

int main(void)
{
	int x=1, s=0;
	
	while(x != 0){
		printf("x=");
		scanf("%d", &x);
		s += x;
	}
	
	printf("���v=%d\n", s);
	
	return(0);
}