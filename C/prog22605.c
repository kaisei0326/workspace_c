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
	
	printf("�g��160cm�ȏ�̐l��\n");
	for (i = 0; i < 5; i++){
		if(student[i].height >= 160){
			printf("%s����\n", student[i].name);
		}
	}
	printf("�ł��B\n");
	
	return (0);
}