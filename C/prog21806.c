#include<stdio.h>

int main(void)
{
	int profile[5][2];
	int i, j;
	float a, b;
	
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			if(j == 0){
				printf("身長%d=", i+1);
			}
			else{
				printf("体重%d=", j+1);
			}
			scanf("%d", &profile[i][j]);
		}
	}
	
	a = 0;
	b = 0;
	
	for(i = 0;i<5;i++){
		a += profile[i][0];
		b += profile[i][1];
	}
	
	a /= 5.0;
	b /= 5.0;
	
	printf("身長の平均=%f\n", a);
	printf("体重の平均=%f\n", b);
	
	return(0);
}