#include <stdio.h>

typedef union {
	int no;
	float height;
	char name[20];
} DATA;

int main(void)
{
	DATA x;
	
	printf("�ԍ�=");
	scanf("%d", &x.no);
	
	printf("�ԍ�=%d\n", x.no);
	
	printf("�g��=");
	scanf("%f", &x.height);
	
	printf("�g��=%f\n", x.height);
	
	printf("���O=");
	scanf("%s", x.name);
	
	printf("���O=%s\n", x.name);
	
	return (0);
}