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
		printf("���O=");
		scanf("%s", student[i].name);
		
		printf("�g��=");
		scanf("%d", &student[i].height);
		
		printf("�̏d=");
		scanf("%d", &student[i].weight);
	}
	for (i = 0; i < 5; i++){
		printf("%s����̐g����%d�ő̏d��%d�ł�\n", student[i].name, student[i].height, student[i].weight);
	}
	
	return (0);
}