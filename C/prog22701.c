#include <stdio.h>

struct age {
	char name[20];
	int age;
};

int main(void)
{
	struct age menber;
	printf("���O=");
	scanf("%s", menber.name);
	printf("�N��=");
	scanf("%d", &menber.age);
	
	printf("%s ����̔N��� %d �΂ł�\n", menber.name, menber.age);
	
	return (0);
}