#include <stdio.h>

struct gakusei {
	char name[20];
	char gakuseki[9];
};

int main()
{
	struct gakusei student;
	printf("���O>> ");
	scanf("%s", student.name);
	printf("�w�Дԍ�>> ");
	scanf("%s", student.gakuseki);
	
	printf("%s �̊w�Дԍ��� %s �ł��B\n", student.name, student.gakuseki);
	
	return 0;
}