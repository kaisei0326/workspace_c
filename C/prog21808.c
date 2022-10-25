#include<stdio.h>

int main(void)
{
	char str[3][10];
	int i, j;
	
	for(i=0;i<3;i++){
		printf("•¶Žš—ñ%d=", i + 1);
		scanf("%s", str[i]);
	}
	
	for(i=0;i<3;i++){
		j = 0;
		while(str[i][j] != '\0'){
			if(str[i][j] >= 'a' && str[i][j] <= 'z'){
				str[i][j] -= 0x20;
			}
			j++;
		}
	}
	
	for(i = 0;i<3;i++){
		printf("•¶Žš—ñ%d=%s\n", i+1, str[i]);
	}
	
	return(0);
}