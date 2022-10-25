#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	char c1, c2;
	int i;
	
	printf("•¶š—ñ1:");
	scanf("%s", str1);
	
	printf("•¶š—ñ2:");
	scanf("%s", str2);
	
	i = 0;
	while(str1[i] != '\0'){
		if(str1[i] >= 'A' && str1[i] <= 'Z'){
			c1 = str1[i] + 0x20;
		}
		else{
			c1 = str1[i];
		}
		
		if(str2[i] >= 'A' && str2[i] <= 'Z'){
			c2 = str2[i] + 0x20;
		}
		else{
			c2 = str2[i];
		}
		if(c1 != c2){
			printf("•¶š—ñ1:%c\n", str1[i]);
			printf("•¶š—ñ2:%c\n", str2[i]);
		}
		i++;
	}
	return 0;
}