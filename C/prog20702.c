#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	int a, b;
	
	printf("•¶Žš—ñ‚P=");
	scanf("%s", str1);
	a = 0;
	
	printf("•¶Žš—ñ‚Q=");
	scanf("%s", str2);
	b = 0;
	
	while(str1[a] != '\0'){
		a++;
	}
	while(str2[b] != '\0'){
		b++;
	}
	if(a == b){
		printf("“¯‚¶’·‚³‚Å‚·\n");
	}
	else if(a < b){
		printf("•¶Žš—ñ‚Q‚Ì•û‚ª’·‚¢‚Å‚·");
	}
	else if(a > b){
		printf("•¶Žš—ñ‚P‚Ì•û‚ª’·‚¢‚Å‚·");
	}
	
	return(0);
}