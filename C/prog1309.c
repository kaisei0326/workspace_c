#include<stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("誕生日を入力してください\n");
	
	printf("月＝");
	scanf("%d", &a);

	printf("日＝");
	scanf("%d", &b);
	
	c = a * 100 + b;
	
	if(c < 120){
		printf("あなたはやぎ座です\n");
	}
	else if(c < 219){
		printf("あなたはみずがめ座です\n");
	}
	else if(c < 321){
		printf("あなたはうお座です\n");
	}
	else if(c < 420){
		printf("あなたはおひつじ座です\n");
	}
	else if(c < 521){
		printf("あなたはおうし座です\n");
	}
	else if(c < 622){
		printf("あなたはふたご座です\n");
	}
	else if(c < 723){
		printf("あなたはかに座です\n");
	}
	else if(c < 823){
		printf("あなたはしし座です\n");
	}
	else if(c < 923){
		printf("あなたはおとめ座です\n");
	}
	else if(c < 1024){
		printf("あなたはてんびん座です\n");
	}
	else if(c < 1122){
		printf("あなたはさそり座です\n");
	}
	else if(c < 1222){
		printf("あなたはいて座です\n");
	}
	else{
		printf("あなたはやぎ座です\n");
	}
	
	return(0);
}