#include <stdio.h>

int main(void)
{
	int score;
	printf("�_��>> ");
	scanf("%d", &score);
	
	if (score >= 90){
		printf("S\n");
	}
	else if (score >= 80){
		printf("A\n");
	}
	else if (score >= 70){
		printf("B\n");
	}
	else if (score >= 60){
		printf("C\n");
	}
	else if (score < 60){
		printf("D\n");
	}
	
	return (0);
}