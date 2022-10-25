#include<stdio.h>

int heisei(int i);
void tate(int j);

int main(void)
{
	int x, i;
	
	i = heisei(x);
	;	
	printf("西暦 : ");
	scanf("%d", &x);
	
	printf("平\n成\n");
	
	if(i >= 20){
		tate(i / 10);
		printf("十\n");
	}
	else if(i >= 10){
		printf("十\n");
	}
	tate(i % 10);
	
	printf("年\n");
	
	return(0);
}

int heisei(int i)
{
	int n;
	n = i - 1989 + 1;
	return(n);
}

void tate(int j){
	switch(j){
	  case 1:
        printf("一\n");
        break;
      case 2:
        printf("二\n");
        break;
      case 3:
        printf("三\n");
        break;
      case 4:
        printf("四\n");
        break;
      case 5:
        printf("五\n");
        break;
      case 6:
        printf("六\n");
        break;
      case 7:
        printf("七\n");
        break;
      case 8:
        printf("八\n");
        break;
      case 9:
        printf("九\n");
        break;
    }
}