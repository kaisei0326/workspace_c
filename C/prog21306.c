#include<stdio.h>

int nenrei(int year, int month, int day);

int main(void)
{
	int y, m, d;
	
	printf("生まれた年=");
	scanf("%d", &y);
	
	printf("生まれた月=");
	scanf("%d", &m);
	
	printf("生まれた日=");
	scanf("%d", &d);
	
	printf("あなたは%d歳です", nenrei(y, m, d));
	
	return(0);
}

int nenrei(int year, int month, int day)
{
	int o;
	o = 2014 - year;
	if(month > 5){
		o--;
	}
	else if((month == 5) && (day > 23)){
		o--;
	}
	
	return(o);
}