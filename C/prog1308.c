#include<stdio.h>
int main(void)
{
	int a;
	printf("7月何日ですか？");
	printf("日にち=");
	scanf("%d", &a);
	
	if(a % 7 == 1){
		 printf("7月%d日は土曜日です", a);
	}
	else if(a % 7 == 0){
		 printf("7月%d日は金曜日です", a);
	}
	else if(a % 7 == 6){
		 printf("7月%d日は木曜日です", a);
	}
	else if(a % 7 == 5){
		 printf("7月%d日は水曜日です", a);
	}
	else if(a % 7 == 4){
		 printf("7月%d日は火曜日です", a);
	}
	else if(a % 7 == 3){
		 printf("7月%d日は月曜日です", a);
	}
	else if(a % 7 == 2){
		 printf("7月%d日は日曜日です", a);
	}
	return(0);
}