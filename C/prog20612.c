#include<stdio.h>

int main(void)
{
	char  str[100];
	int a;
	printf("ŠwĞ”Ô†=");
	scanf("%s", str);
	
	a = (str[6] - '0') * 10 + str[7] - '0';
	
	printf("%d\n", a);
	if(a % 3 == 0){
		printf("3‚ÅŠ„‚èØ‚ê‚Ü‚·\n");
	}
	else{
		printf("3‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñ\n");
	}
	return(0);
}