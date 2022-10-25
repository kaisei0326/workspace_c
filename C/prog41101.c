#include <stdio.h>

typedef union {
	int no;
	float height;
	char name[20];
} DATA;

int main(void)
{
	DATA x;
	
	printf("番号=");
	scanf("%d", &x.no);
	
	printf("番号=%d\n", x.no);
	
	printf("身長=");
	scanf("%f", &x.height);
	
	printf("身長=%f\n", x.height);
	
	printf("名前=");
	scanf("%s", x.name);
	
	printf("名前=%s\n", x.name);
	
	return (0);
}