#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int kyoriac, kyoriab, kyoribc;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	kyoriac = c - a < 0 ? a - c : c - a;
	kyoriab = b - a < 0 ? a - b : b - a;
	kyoribc = b - c < 0 ? c - b : b - c;
	
	if(kyoriab <= d && kyoribc <= d){
		printf("Yes\n");
	}
	else if(kyoriac <= d){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	
	return (0);
}