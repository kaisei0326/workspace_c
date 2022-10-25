#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	int a, b, c;
	
	printf("•¶Žš—ñ1=");
	scanf("%s", str1);
	a = 0;
	
	printf("•¶Žš—ñ2=");
	scanf("%s", str2);
	b = 0;
	
	while(str1[a] != '\0'){
		a++;
	}
	
		for(c = 0;c<a;c++){
			if(str1[c] != str2[c]){
			printf("•¶Žš—ñ1:%c\n", str1[c]);
			printf("•¶Žš—ñ2:%c\n", str2[c]);
		}
		}
	
	return(0);
}
		