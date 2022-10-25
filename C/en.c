#include<stdio.h>
#include<math.h>

int main(void)
{
	float r;
	
	scanf("%lf", &r);

	if(r > 0){
	printf("%f %f", r*r*M_PI, r*2*M_PI);
	}
	printf("\n");
	return(0);
}