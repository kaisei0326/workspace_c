#include<stdio.h>

int summerv(int month, int day);

int main(void)
{
	int month;
	int day;
	
	printf("月:");
	scanf("%d", &month);
	
	printf("日:");
	scanf("%d", &day);
	
	if(summerv(month, day) == 0){
		printf("%d月%d日は夏休みです\n", month, day);
	}
	else if(summerv(month, day) < 0){
		printf("%d月%d日は前期日程中\n", month, day);
	}
	else{
		printf("%d月%d日は後期日程中");
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