#include <stdio.h>

struct profile {
	char name[20];
	int height;
	int weight;
};

int main(void)
{
	struct profile student;
	
	printf("���O=");
	scanf("%s", student.name);
	
	printf("�g��=");
	scanf("%d", &student.height);
	
	printf("�̏d=");
	scanf("%d", &student.weight);
	
	printf("%s ����̐g����%d �ő̏d��%d �ł�\n", student.name, student.height, student.weight);
	
	return(0);
}