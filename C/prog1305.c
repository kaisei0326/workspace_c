#include <stdio.h>

int main(void)
{
	int gakuseki;
	
	printf("番号=");
	scanf("%d", &gakuseki);
	
	if (!(gakuseki == 3)){
		printf("男子です\n");
	}
	else {
		printf("女子です\n");
	}
	return (0);
}