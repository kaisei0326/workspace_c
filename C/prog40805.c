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
		printf("mallocに失敗しました\n");
	}
	else {
		printf("出席番号=");
		scanf("%d", &user->no);
		printf("名前=");
		scanf("%s", user->name);
		
		printf("出席番号=%d\n", user->no);
		printf("名前=%s\n", user->name);
		
		free(user);
	}
	return (0);
}