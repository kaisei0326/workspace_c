#include<stdio.h>

int main(void)
{
	char str[5][10];
	int i;
	
	for(i=0;i<5;i++){
		printf("������%d=", i + 1);
		scanf("%s", str[i]);
	}
	
	printf("�����Ŏn�܂镶����\n");
	
	for(i=0;i<5;i++){
		if(str[i][0] >= '0' && str[i][0] <= '9'){
			printf("������%d=%s\n", i + 1,str[i]);
		}
	}
	
	return(0);
}