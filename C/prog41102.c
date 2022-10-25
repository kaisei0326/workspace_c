#include <stdio.h>

#define STRING 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3

typedef struct{
	int kind;
	union {
		char s[20];
		int i;
		float f;
		double d;
	} var;
} DATA;

void input(DATA *x);
void print(DATA *x);

int main(void)
{
	DATA x;
	
	input (&x);
	
	print(&x);
	
	return (0);
}

void input(DATA *x)
{
	printf("0:������ 1:���� 2:�P���x 3:�{���x\n");
	printf("���>");
	scanf("%d", &(x->kind));
	
	switch (x->kind) {
	  case STRING:
	    printf("������=");
		scanf("%s", x->var.s);
		break;
		
	  case INT:
	    printf("����=");
		scanf("%d", &(x->var.i));
		break;
		
	  case FLOAT:
	    printf("�P���x=");
		scanf("%f", &(x->var.f));
		break;
		
	  case DOUBLE:
	    printf("�{���x=");
		scanf("%f", &(x->var.d));
		break;
	}
}

void print(DATA *x)
{
	switch (x->kind) {
	  case STRING:
	    printf("������=%s\n", x->var.s);
		break;
		
	  case INT:
	    printf("����=%d\n", x->var.i);
		break;
		
	  case FLOAT:
	    printf("�P���x=%f\n", x->var.f);
		break;
		
	  case DOUBLE:
	    printf("�{���x=%f\n", x->var.d);
		break;
	}
}