#include<stdio.h>
int main(void)
{
	int a;
	printf("7�������ł����H");
	printf("���ɂ�=");
	scanf("%d", &a);
	
	if(a % 7 == 1){
		 printf("7��%d���͓y�j���ł�", a);
	}
	else if(a % 7 == 0){
		 printf("7��%d���͋��j���ł�", a);
	}
	else if(a % 7 == 6){
		 printf("7��%d���͖ؗj���ł�", a);
	}
	else if(a % 7 == 5){
		 printf("7��%d���͐��j���ł�", a);
	}
	else if(a % 7 == 4){
		 printf("7��%d���͉Ηj���ł�", a);
	}
	else if(a % 7 == 3){
		 printf("7��%d���͌��j���ł�", a);
	}
	else if(a % 7 == 2){
		 printf("7��%d���͓��j���ł�", a);
	}
	return(0);
}