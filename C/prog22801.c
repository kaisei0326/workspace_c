#include <stdio.h>

typedef struct {
	char name[40];
	int kamoku1;
	int kamoku2;
	int kamoku3;
}SEISEKI;

int main(void)
{
	SEISEKI tensuu;
	SEISEKI *p;
	p = &tensuu;
	
	printf("–¼‘O=");
	scanf("%s", p->name);
	printf("‰È–Ú‚P=");
	scanf("%d", &p->kamoku1);
	printf("‰È–Ú‚Q=");
	scanf("%d", &p->kamoku2);
	printf("‰È–Ú‚R=");
	scanf("%d", &p->kamoku3);
	
	printf("–¼‘O=%s\n‰È–Ú‚P=%d\n‰È–Ú‚Q=%d\n‰È–Ú‚R=%d\n", p->name, p->kamoku1, p->kamoku2, p->kamoku3);
	return (0);
}