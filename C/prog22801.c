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
	
	printf("���O=");
	scanf("%s", p->name);
	printf("�ȖڂP=");
	scanf("%d", &p->kamoku1);
	printf("�ȖڂQ=");
	scanf("%d", &p->kamoku2);
	printf("�ȖڂR=");
	scanf("%d", &p->kamoku3);
	
	printf("���O=%s\n�ȖڂP=%d\n�ȖڂQ=%d\n�ȖڂR=%d\n", p->name, p->kamoku1, p->kamoku2, p->kamoku3);
	return (0);
}