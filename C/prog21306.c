#include<stdio.h>

int nenrei(int year, int month, int day);

int main(void)
{
	int y, m, d;
	
	printf("¶‚Ü‚ê‚½”N=");
	scanf("%d", &y);
	
	printf("¶‚Ü‚ê‚½Œ=");
	scanf("%d", &m);
	
	printf("¶‚Ü‚ê‚½“ú=");
	scanf("%d", &d);
	
	printf("‚ ‚È‚½‚Í%dÎ‚Å‚·", nenrei(y, m, d));
	
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