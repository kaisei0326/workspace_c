#include <stdio.h>

struct birthday {
	char name[20];
	int month;
	int day;
};

int main(void)
{
	struct birthday data;
	struct birthday *p;

	p = &data;

	printf("���O=");
	scanf("%s", (*p).name);
	
	printf("�a����=");
	scanf("%d", &(*p).month);

	printf("�a����=");
	scanf("%d", &(*p).day);

	printf("%s ����̒a������%d ��%d ���ł�\n", (*p).name, (*p).month, (*p).day);
	
	return (0);
}