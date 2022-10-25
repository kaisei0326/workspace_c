#include<stdio.h>

int main(void)
{
	char c;
	char s[100];
	int i;
	printf("•¶Žš=");
	scanf("%c", &c);
	printf("•¶Žš—ñ=");
	scanf("%s", s);
	
	i = 0;
	
	while((s[i] != c) && (s[i] != '\0')){
		i++;
	}
	if(s[i] == '\0'){
		printf("-1\n");
	}
	else { 
		printf("%d\n", i);
	}
	return(0);
}