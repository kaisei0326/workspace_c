#include<stdio.h>

int main(void)
{
	int a, b;
	int c;
	printf("文字列=");
	scanf("%s", a);
	printf("表示回数=");
	scanf("%d", &b);
	for(c = 0;c < b;c++){
		printf("%s\n", a);
	}
	return(0);
}