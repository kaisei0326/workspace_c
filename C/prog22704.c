#include <stdio.h>

struct age {
	char name[20];
	int age;
};

int main(void)
{
	struct age profile;
	struct age *p;
	
	p = &profile;
	
	printf("���O=");
	scanf("%s", (*p).name);
	
	printf("�N��=");
	scanf("%d", &(*p).age);
	
	printf("%s ����̔N��� %d �΂ł�\n", (*p).name, (*p).age);
	
	return (0);
}