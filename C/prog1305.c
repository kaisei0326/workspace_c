#include <stdio.h>

int main(void)
{
	int gakuseki;
	
	printf("�ԍ�=");
	scanf("%d", &gakuseki);
	
	if (!(gakuseki == 3)){
		printf("�j�q�ł�\n");
	}
	else {
		printf("���q�ł�\n");
	}
	return (0);
}