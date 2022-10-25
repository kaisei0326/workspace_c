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
	
	printf("–¼‘O=");
	scanf("%s", (*p).name);
	
	printf("”N—î=");
	scanf("%d", &(*p).age);
	
	printf("%s ‚³‚ñ‚Ì”N—î‚Í %d Î‚Å‚·\n", (*p).name, (*p).age);
	
	return (0);
}