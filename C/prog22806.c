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
		printf("名前=");
		scanf("%s", p->name);
		printf("誕生月=");
		scanf("%d", &(p->month));
		printf("誕生日=");
		scanf("%d", &(p->day));
		p++;
	}
}

void print_birthday(BIRTHDAY *p)
{
	int i;

	for (i = 0; i < 5; i++){
		printf("名前=%s\n", p->name);
		printf("誕生月=%d\n", p->month);
		printf("誕生日=%d\n", p->day);
	}
}