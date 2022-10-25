#include <stdio.h>

struct profile {
	char name[20];
	int height;
	int weight;
};

int main(void)
{
	struct profile student;
	
	printf("名前=");
	scanf("%s", student.name);
	
	printf("身長=");
	scanf("%d", &student.height);
	
	printf("体重=");
	scanf("%d", &student.weight);
	
	printf("%s さんの身長は%d で体重は%d です\n", student.name, student.height, student.weight);
	
	return(0);
}