#include <stdio.h>

struct profile {
	char name[20];
	int height;
	int weight;
};

int main(void)
{
	struct profile student[5];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("名前=");
		scanf("%s", student[i].name);
		
		printf("身長=");
		scanf("%d", &student[i].height);
		
		printf("体重=");
		scanf("%d", &student[i].weight);
	}
	for (i = 0; i < 5; i++){
		printf("%sさんの身長は%dで体重は%dです\n", student[i].name, student[i].height, student[i].weight);
	}
	
	return (0);
}