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
	
	printf("身長160cm以上の人は\n");
	for (i = 0; i < 5; i++){
		if(student[i].height >= 160){
			printf("%sさん\n", student[i].name);
		}
	}
	printf("です。\n");
	
	return (0);
}