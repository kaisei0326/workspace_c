#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("風速と1時間雨量を入力してください\n");
	printf("風速(m/s)=");
	scanf("%d", &a);
	printf("一時間雨量(mm)=");
	scanf("%d", &b);
	
	c = 0;
	
	if(a >= 25){
		printf("暴風警報\n");
		c = 1;
	}
	else if(a >= 15){
		printf("強風注意報\n");
		c = 1;
	}
	
	if(b >=60){
		printf("大雨注意報\n");
		c = 1;
	}
	else if(b >= 40){
		printf("大雨注意報\n");
		c = 1;
	}
	
	if(c = 0){
		printf("注意報・警報はありません^n");
	}
	return(0);
}