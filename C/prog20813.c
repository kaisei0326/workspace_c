#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[100];
	char name2[100];
	int i;
	
	printf("名前=");
	scanf("%s", name);
	
	strcpy(name2, name);
	
	for(i = 0;i < strlen(name);i++){
		if(name[i] >= 'a' && name[i] <= 'z'){
			name[i] -= 0x20;
		}
	}
	
	if(strcmp(name, "MASAKI") == 0){
		printf("あなたは%sさんです\n", name2);
	}
	else{
		printf("あなたは違う人です\n");
	}
	
	return (0);
}