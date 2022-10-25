#include <stdio.h>

struct student {
	char name[20];
	char gakuseki[9];
};

int main(void)
{
	struct student gakusei;
	
	printf("名前=");
	scanf("%s", gakusei.name);
	
	printf("学籍番号=");
	scanf("%s", gakusei.gakuseki);
	
	printf("%s の学籍番号は%s です。", gakusei.name, gakusei.gakuseki);
	
	return 0;
}