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
	
	printf("���O=");
	scanf("%s", p->name);
	printf("�ȖڂP=");
	scanf("%d", &p->kamoku[0]);
	printf("�ȖڂQ=");
	scanf("%d", &p->kamoku[1]);
	printf("�ȖڂR=");
	scanf("%d", &p->kamoku[2]);
	
	printf("���O=%s\n�ȖڂP=%d�_\n�ȖڂQ=%d�_\n�ȖڂR=%d�_\n", p->name, p->kamoku[0], p->kamoku[1], p->kamoku[2]);
	return (0);
}