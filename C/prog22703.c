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

	printf("名前=");
	scanf("%s", (*p).name);
	
	printf("誕生月=");
	scanf("%d", &(*p).month);

	printf("誕生日=");
	scanf("%d", &(*p).day);

	printf("%s さんの誕生日は%d 月%d 日です\n", (*p).name, (*p).month, (*p).day);
	
	return (0);
}