#include<stdio.h>

int nenrei(int year, int month, int day);

int main(void)
{
	int y, m, d;
	
	printf("���܂ꂽ�N=");
	scanf("%d", &y);
	
	printf("���܂ꂽ��=");
	scanf("%d", &m);
	
	printf("���܂ꂽ��=");
	scanf("%d", &d);
	
	printf("���Ȃ���%d�΂ł�", nenrei(y, m, d));
	
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