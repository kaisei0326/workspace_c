#include <stdio.h>

struct student {
	char name[20];
	char gakuseki[9];
};

int main(void)
{
	struct student gakusei;
	
	printf("���O=");
	scanf("%s", gakusei.name);
	
	printf("�w�Дԍ�=");
	scanf("%s", gakusei.gakuseki);
	
	printf("%s �̊w�Дԍ���%s �ł��B", gakusei.name, gakusei.gakuseki);
	
	return 0;
}