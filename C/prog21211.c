#include<stdio.h>

float enzan(int kind, float a, float b);
float input_float(void);
int input_int(void);

float enzan(int kind,float a,float b)
{
	float c;
	switch(kind){
	  case 1:
	    c = a + b;
		break;
		
	  case 2:
	    c = a - b;
		break;
		
	  case 3:
	    c = a * b;;
		break;
		
      case 4:
	    if(b != 0){
			c = a / b;
	    }
		else{
			c = 0;
			printf("ERROR\n");
		}
		break;
		
	  default:
	    c = 0;
		printf("ERROR\n");
		break;
	}
	return(c);
}

float input_float(void)
{
	float f;
	printf("À”=");
	scanf("%f", &f);
	
	return(f);
}

int input_int(void)
{
	int i;
	printf("®”=");
	scanf("%d", &i);
	
	return(i);
}

int main(void)
{
	int kind;
	float a;
	float b;
	float result;
	
	a = input_float();
	b = input_float();
	kind = input_int();
	
	result = enzan(kind, a, b);
	
	printf("‰‰ZŒ‹‰Ê=%f", result);
	
	return(0);
}