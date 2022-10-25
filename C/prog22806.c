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
		printf("–¼‘O=");
		scanf("%s", p->name);
		printf("’a¶ŒŽ=");
		scanf("%d", &(p->month));
		printf("’a¶“ú=");
		scanf("%d", &(p->day));
		p++;
	}
}

void print_birthday(BIRTHDAY *p)
{
	int i;

	for (i = 0; i < 5; i++){
		printf("–¼‘O=%s\n", p->name);
		printf("’a¶ŒŽ=%d\n", p->month);
		printf("’a¶“ú=%d\n", p->day);
	}
}