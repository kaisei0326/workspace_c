#include<stdio.h>

int goukei(int n)
{
	int i, g;
	g = 0;
	for(i = 1;i <= n;i++){
		g += i;
			}
	return(g);
}

int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	
	printf("1����%d�܂ł̍��v�l��%d�ł�\n", a, goukei(a));
	
	return 0;
}