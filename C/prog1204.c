#include<stdio.h>

int main(void)
{
    int i;
	
	printf("整数を入力してください：");
	scanf("%d", &i);
	
	if(i == 0){
	   printf("%dは0です\n",i);
	}
	else if(i > 0){
		printf("%dは正の整数です\n",i);
	}
	else{
		printf("%d負の整数です\n",i);
	}
	
	return(0);
}