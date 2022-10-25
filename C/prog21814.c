
#include<stdio.h>

int main(void)
{
	char sei[5][2][10];
	int i, j, n;
	
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			if(j == 0){
				printf("©%d=", i + 1);
				scanf("%s", sei[i][j]);
			}
			else if(j == 1){
				printf("–¼%d=", i + 1);
				scanf("%s", sei[i][j]);
			}
		}
	}
	for(i = 0;i < 5;i++){
		printf("Ž–¼%d=", i+1);
		for(j = 0;j < 2;j++){
			printf("%s ", sei[i][j]);
		}
		printf("\n");
	}
	return(0);
}