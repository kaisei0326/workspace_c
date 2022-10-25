#include<stdio.h>

int main(void)
{
	int kaku[9][9];
	int i;
	int j;
	
	for(i = 1; i <= 9;i++){
		for(j = 1;j <= 9;j++){
			kaku[i -1][j-1] = i * j;
		}
	}
	
	for(i = 1;i <= 9;i++){
		for(j=1;j<=9;j++){
			printf("%d * %d = %d\n", i, j, kaku[i - 1][j - 1]);
		}
	}
	return(0);
}