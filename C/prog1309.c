#include<stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("�a��������͂��Ă�������\n");
	
	printf("����");
	scanf("%d", &a);

	printf("����");
	scanf("%d", &b);
	
	c = a * 100 + b;
	
	if(c < 120){
		printf("���Ȃ��͂€���ł�\n");
	}
	else if(c < 219){
		printf("���Ȃ��݂͂����ߍ��ł�\n");
	}
	else if(c < 321){
		printf("���Ȃ��͂������ł�\n");
	}
	else if(c < 420){
		printf("���Ȃ��͂��Ђ����ł�\n");
	}
	else if(c < 521){
		printf("���Ȃ��͂��������ł�\n");
	}
	else if(c < 622){
		printf("���Ȃ��͂ӂ������ł�\n");
	}
	else if(c < 723){
		printf("���Ȃ��͂��ɍ��ł�\n");
	}
	else if(c < 823){
		printf("���Ȃ��͂������ł�\n");
	}
	else if(c < 923){
		printf("���Ȃ��͂��Ƃߍ��ł�\n");
	}
	else if(c < 1024){
		printf("���Ȃ��͂Ă�т���ł�\n");
	}
	else if(c < 1122){
		printf("���Ȃ��͂�������ł�\n");
	}
	else if(c < 1222){
		printf("���Ȃ��͂��č��ł�\n");
	}
	else{
		printf("���Ȃ��͂€���ł�\n");
	}
	
	return(0);
}