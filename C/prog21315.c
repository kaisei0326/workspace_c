#include<stdio.h>

int summerv(int month, int day);

int main(void)
{
	int month;
	int day;
	
	printf("��:");
	scanf("%d", &month);
	
	printf("��:");
	scanf("%d", &day);
	
	if(summerv(month, day) == 0){
		printf("%d��%d���͉ċx�݂ł�\n", month, day);
	}
	else if(summerv(month, day) < 0){
		printf("%d��%d���͑O��������\n", month, day);
	}
	else{
		printf("%d��%d���͌��������");
	}
	
	return(0);
}

int summerv(int month, int day)
{
	int i = 0;
	if(month <= 8 && day <= 20){
		i--;
	}
	else if(month >= 10){
		i++;
	}
	return(i);
}