#include<stdio.h>

int main(void)
{
	char str[5][10];
	int i;
	
	for(i=0;i<5;i++){
		printf("•¶Žš—ñ%d=", i + 1);
		scanf("%s", str[i]);
	}
	
	printf("”Žš‚ÅŽn‚Ü‚é•¶Žš—ñ\n");
	
	for(i=0;i<5;i++){
		if(str[i][0] >= '0' && str[i][0] <= '9'){
			printf("•¶Žš—ñ%d=%s\n", i + 1,str[i]);
		}
	}
	
	return(0);
}