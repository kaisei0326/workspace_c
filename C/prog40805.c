#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int no;
	char name[20];
}PROFILE;

int main(void)
{
	PROFILE *user;
	
	user = (PROFILE *)malloc(sizeof(PROFILE));
	
	if (user == NULL){
		printf("malloc�Ɏ��s���܂���\n");
	}
	else {
		printf("�o�Ȕԍ�=");
		scanf("%d", &user->no);
		printf("���O=");
		scanf("%s", user->name);
		
		printf("�o�Ȕԍ�=%d\n", user->no);
		printf("���O=%s\n", user->name);
		
		free(user);
	}
	return (0);
}