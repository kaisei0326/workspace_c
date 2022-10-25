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
		printf("名前=");
		scanf("%s", tensuu[n].name);
		
		printf("点数=");
		scanf("%d", &tensuu[n].ten);
	}
	
	printf("名前を入力してください=");
	scanf("%s", name);
	
	for (n = 0; n < 5; n++){
		if(name == tensuu[n].name){
			printf("%s さんは %d 点です\n", tensuu[n].name, tensuu[n].ten);
		}
	}
	
	return (0);
}