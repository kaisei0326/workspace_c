#include <stdio.h>

int main(void)
{
	float five, ten;
	
	scanf("%f %f", &five, &ten);
	if (five < 35.5 && ten < 71.0) {
		printf("AAA\n");
	}
	else if (five < 37.5 && ten < 77.0) {
		printf("AA\n");
	}
	else if (five < 40.0 && ten < 83.0) {
		printf("A\n");
	}
	else if (five < 43.0 && ten < 89.0) {
		printf("B\n");
	}
	else if (five < 50.0 && ten < 105.0) {
		printf("C\n");
	}
	else if (five < 55.0 && ten < 116.0) {
		printf("D\n");
	}
	else if (five < 70.0 && ten < 148.0) {
		printf("E\n");
	}
	else {
		printf("NA\n");
	}
	
	return (0);
}