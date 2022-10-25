#include<stdio.h>

int main()
{
	char str[100];
	int a;
	int b;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	a = 0;
	b = 0;
	while(str[a] != '\0'){
		if(b <= str[a]){
			b = str[a];
		}
		a++;
	}
	printf("Å‘å‚Ì”Žš=%c\n", b);
	return(0);
}