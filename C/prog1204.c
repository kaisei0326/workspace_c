#include<stdio.h>

int main(void)
{
    int i;
	
	printf("��������͂��Ă��������F");
	scanf("%d", &i);
	
	if(i == 0){
	   printf("%d��0�ł�\n",i);
	}
	else if(i > 0){
		printf("%d�͐��̐����ł�\n",i);
	}
	else{
		printf("%d���̐����ł�\n",i);
	}
	
	return(0);
}