#include <stdio.h>

typedef struct {
	char name[20];
	int month;
	int day;
} BIRTHDAY;

void input_birthday(BIRTHDAY *p);
void print_birthday(BIRTHDAY *p);

int main(void)
{
	BIRTHDAY member[5];
	
	input_birthday(member);
	print_birthday(member);
	
	return (0);
}

void input_birthday(BIRTHDAY *p)
{
	int i;

	for (i = 0; i < 5; i++){
		printf("���O=");
		scanf("%s", p->name);
		printf("�a����=");
		scanf("%d", &(p->month));
		printf("�a����=");
		scanf("%d", &(p->day));
		p++;
	}
}

void print_birthday(BIRTHDAY *p)
{
	int i;

	for (i = 0; i < 5; i++){
		printf("���O=%s\n", p->name);
		printf("�a����=%d\n", p->month);
		printf("�a����=%d\n", p->day);
	}
}