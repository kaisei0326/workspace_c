#include <stdio.h>

struct profile {
	char name[20];
	int ten;
};

int main(void)
{
	struct profile tensuu[5];
	int n, i;
	int max, min;
	char max_name[20];
	char min_name[20];
	
	for (n = 0; n < 5; n++){
		printf("���O=");
		scanf("%s", tensuu[n].name);
		
		printf("�_��=");
		scanf("%d", &tensuu[n].ten);
	}
	
	max = tensuu[0].ten;
	min = tensuu[0].ten;
	for(i = 0; i < 20; i++){
		max_name[i] = tensuu[0].name[i];
		min_name[i] = tensuu[0].name[i];
	}
	
	for (n = 1; n < 5; n++){
		if (max < tensuu[n].ten){
			max = tensuu[n].ten;
			for(i = 0; i < 20; i++){
				max_name[i] = tensuu[n].name[i];
			}
		}
		if (min > tensuu[n].ten){
			min = tensuu[n].ten;
			for(i = 0; i < 20; i++){
				min_name[i] = tensuu[n].name[i];
			}
		}
	}
	printf("�ō��_�� %s ����\n", max_name);
	printf("�Œ�_�� %s ����\n", min_name);
	
	return (0);
}