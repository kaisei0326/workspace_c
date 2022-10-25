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
	printf("0:文字列 1:整数 2:単精度 3:倍精度\n");
	printf("種類>");
	scanf("%d", &(x->kind));
	
	switch (x->kind) {
	  case STRING:
	    printf("文字列=");
		scanf("%s", x->var.s);
		break;
		
	  case INT:
	    printf("整数=");
		scanf("%d", &(x->var.i));
		break;
		
	  case FLOAT:
	    printf("単精度=");
		scanf("%f", &(x->var.f));
		break;
		
	  case DOUBLE:
	    printf("倍精度=");
		scanf("%f", &(x->var.d));
		break;
	}
}

void print(DATA *x)
{
	switch (x->kind) {
	  case STRING:
	    printf("文字列=%s\n", x->var.s);
		break;
		
	  case INT:
	    printf("整数=%d\n", x->var.i);
		break;
		
	  case FLOAT:
	    printf("単精度=%f\n", x->var.f);
		break;
		
	  case DOUBLE:
	    printf("倍精度=%f\n", x->var.d);
		break;
	}
}