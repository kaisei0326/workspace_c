#include<stdio.h>

int input_int2(int max);

int main(void)
{
	int i;
	
	i = input_int2(10);
	printf("���͂����̂�%d�ł�", i);
	
	return (0);
}

int input_int2(int max)
{
	int i;
	
	while(1){
	printf("10�ȉ��̐���=");
	scanf("%d", &i);
	
	if(i <= max){
		break;
		}
	}
	return (i);
}