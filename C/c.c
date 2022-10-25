#include<stdio.h>

int main(void)
{
	int en,x,y,r;
	double pai;
	
	r=1000;
	en=0;
	
	for(x=0;x < r;x+=1){
		for(y=0;y < r;y+=1){
			if((x*x+y*y)<=r*r){
				en=en+1;
			}
		}
	}
	pai= 4*en/ (double)(r*r);
	printf("‰~Žü—¦=%lf\n",pai);
}