#include<stdio.h>

int main(void)
{
	char c, d;
	int b, e, i;
	
	char a[200];
	
	printf("•¶Žš=");
	scanf("%c", &c);
	
	printf("•¶Žš—ñ=");
	scanf("%s", a);
	
	e = 0;
	i = 0;
	while(a[e] != '\0'){
		++e;
	}
	for(b = 0;b <= e;b++){
		if(a[b] == c){
			i++;
		}

	}
			printf("%d", i);
	return(0);
}