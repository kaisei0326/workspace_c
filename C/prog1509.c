#include<stdio.h>
int main(void)
{
	int a;
	printf("日にち=");
	scanf("%d", &a);
	
	if((a >= 1) && (a <= 5)){
		printf("試験期間中です\n");
		}
	else if(a == 6){
		printf("予備日です\n");
		}
	else if((a >= 7) && (a <= 9)){
		printf("試験返却日です\n");
		}
	else if((a >= 10) && (a <= 31)){
		printf("夏休みです\n");
		}
	else{
		printf("おい（怒）\n");
	}
		return(0);
}