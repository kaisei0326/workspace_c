#include <stdio.h>
#include <conio.h>

int main(void)
{
	char c;
	int ransuu;
	
	printf("奇数を入力してください:");
	scanf("%d", &ransuu);
	c = '1';
	while (c != '0'){
		c = getch();
		ransuu = (ransuu * 12869 + 6925) % 32768;
		switch(ransuu % 3){
	      case 0:
		    printf("＝ ぐう\n");
		    break;
			
		  case 1:
		    printf("＝ ちょき\n");
			break;
			
		  case 2:
		    printf("＝ ぱあ\n");
			break;
		}
		
	}
	return (0);
}