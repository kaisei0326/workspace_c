#include <stdio.h>

struct profile {
	char name[20];
	int ten;
};

int main(void)
{
	struct profile tensuu[5];
	int n;
	char name[20];
	
	for (n = 0; n < 5; n++){
		printf("���O=");
		scanf("%s", tensuu[n].name);
		
		printf("�_��=");
		scanf("%d", &tensuu[n].ten);
	}
	
	printf("���O����͂��Ă�������=");
	scanf("%s", name);
	
	for (n = 0; n < 5; n++){
		if(name == tensuu[n].name){
			printf("%s ����� %d �_�ł�\n", tensuu[n].name, tensuu[n].ten);
		}
	}
	
	return (0);
}