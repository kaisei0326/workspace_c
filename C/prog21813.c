#include<stdio.h>

int main(void)
{
	char str[5][10];
	int i;
	
	for(i=0;i<5;i++){
		printf("文字列%d=", i + 1);
		scanf("%s", str[i]);
	}
	
	printf("数字で始まる文字列\n");
	
	for(i=0;i<5;i++){
		if(str[i][0] >= '0' && str[i][0] <= '9'){
			printf("文字列%d=%s\n", i + 1,str[i]);
		}
	}
	
	return(0);
}