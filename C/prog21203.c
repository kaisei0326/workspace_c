#include<stdio.h>

int input(int x, int y)
{
	int i;
	i = 0;
	if(x > y){
		i++;
	}
	else if(x < y){
		i--;
	}
	return(i);
}

int main(void)
{
	int a, b;
	printf("����1=");
	scanf("%d", &a);
	printf("����2=");
	scanf("%d", &b);
	
	switch(input(a, b)){
	  case 0:
	    printf("���������ł�\n");
		break;
		
	  case 1:
	    printf("1�̕����傫���ł�\n");
		break;
		
	  case -1:
	    printf("2�̕����傫���ł�\n");
		break;
	}
	return 0;
}