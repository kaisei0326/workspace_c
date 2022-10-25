#include <stdio.h>

struct age {
	char name[20];
	int age;
};

int main(void)
{
	struct age menber;
	printf("–¼‘O=");
	scanf("%s", menber.name);
	printf("”N—î=");
	scanf("%d", &menber.age);
	
	printf("%s ‚³‚ñ‚Ì”N—î‚Í %d Î‚Å‚·\n", menber.name, menber.age);
	
	return (0);
}