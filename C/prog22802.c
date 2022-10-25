#include <stdio.h>

typedef struct {
	char name[40];
	int kamoku[3];
}SEISEKI;

int main(void)
{
	SEISEKI tensuu;
	SEISEKI *p;
	p = &tensuu;
	
	printf("–¼‘O=");
	scanf("%s", p->name);
	printf("‰È–Ú‚P=");
	scanf("%d", &p->kamoku[0]);
	printf("‰È–Ú‚Q=");
	scanf("%d", &p->kamoku[1]);
	printf("‰È–Ú‚R=");
	scanf("%d", &p->kamoku[2]);
	
	printf("–¼‘O=%s\n‰È–Ú‚P=%d“_\n‰È–Ú‚Q=%d“_\n‰È–Ú‚R=%d“_\n", p->name, p->kamoku[0], p->kamoku[1], p->kamoku[2]);
	return (0);
}