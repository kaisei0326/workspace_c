#include<stdio.h>
#include<string.h>

int main(void)
{
	char name1[100];
	char name2[100];
	
    printf("���O1=");
    scanf("%s", name1);
	
	printf("���O2=");
	scanf("%s", name2);
	
	if(strncmp(name1, name2, 4) == 0){
		printf("�悭�������O�ł�\n");
	}
	else{
		printf("���ĂȂ����O�ł�\n");
	}
	
	return(0);
}