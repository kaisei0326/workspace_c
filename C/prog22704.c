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
	
	printf("名前=");
	scanf("%s", (*p).name);
	
	printf("年齢=");
	scanf("%d", &(*p).age);
	
	printf("%s さんの年齢は %d 歳です\n", (*p).name, (*p).age);
	
	return (0);
}