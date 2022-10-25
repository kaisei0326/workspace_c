#include <stdio.h>

struct gakusei {
	char name[20];
	char gakuseki[9];
};

int main()
{
	struct gakusei student;
	printf("名前>> ");
	scanf("%s", student.name);
	printf("学籍番号>> ");
	scanf("%s", student.gakuseki);
	
	printf("%s の学籍番号は %s です。\n", student.name, student.gakuseki);
	
	return 0;
}