#include <stdio.h>

struct age {
	char name[20];
	int age;
};

int main(void)
{
	struct age menber;
	printf("名前=");
	scanf("%s", menber.name);
	printf("年齢=");
	scanf("%d", &menber.age);
	
	printf("%s さんの年齢は %d 歳です\n", menber.name, menber.age);
	
	return (0);
}