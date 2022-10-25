#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[100];
	char name2[100];
	int i;
	
	printf("–¼‘O=");
	scanf("%s", name);
	
	strcpy(name2, name);
	
	for(i = 0;i < strlen(name);i++){
		if(name[i] >= 'a' && name[i] <= 'z'){
			name[i] -= 0x20;
		}
	}
	
	if(strcmp(name, "MASAKI") == 0){
		printf("‚ ‚È‚½‚Í%s‚³‚ñ‚Å‚·\n", name2);
	}
	else{
		printf("‚ ‚È‚½‚Íˆá‚¤l‚Å‚·\n");
	}
	
	return (0);
}