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

	printf("–¼‘O=");
	scanf("%s", (*p).name);
	
	printf("’a¶Œ=");
	scanf("%d", &(*p).month);

	printf("’a¶“ú=");
	scanf("%d", &(*p).day);

	printf("%s ‚³‚ñ‚Ì’a¶“ú‚Í%d Œ%d “ú‚Å‚·\n", (*p).name, (*p).month, (*p).day);
	
	return (0);
}