#include<stdio.h>

int goukei(int g);

int main(void)
{
	int i;
	
	printf("�����l=");
	scanf("%d", &i);
	
	printf("1����%d�܂ł̍��v=%d\n", i, goukei(i));
	
	return(0);
}

int goukei(int g)
{
	int i;
	
	if(g == 1){
		return(1);
	}
	i = goukei(g - 1) + g;
	
	return(i);
}