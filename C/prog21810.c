#include<stdio.h>

int main(void)
{
	char str[100];
	int i=0;
	int k=0;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	do{
		if('0' <= str[i] && str[i] <= '9'){
			k++;
		}
		i++;
	}while (str[i] != '\0');
	
	printf("”Žš‚Ì”‚Í%dŒÂ‚Å‚·\n", k);
	
	return(0);
}