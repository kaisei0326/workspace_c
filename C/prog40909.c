#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 20

typedef struct {
	char name[MAX_NAME_LEN];
	float height;
	float weight;
} PROFILE;

PROFILE *alloc_profile(void);
float bmi(PROFILE *member);

int main(void)
{
	PROFILE *member1;
	PROFILE *member2;
	float bmi1;
	float bmi2;
	
	member1 = alloc_profile();
	member2 = alloc_profile();
	
	bmi1 = bmi(member1);
	bmi2 = bmi(member2);
	
	if (bmi1 > bmi2){
		printf("%sさんのほうが太っています\n", member1->name);
	}
	else if (bmi1 < bmi2){
		printf("%sさんのほうが太っています\n", member2->name);
	}
	else {
		printf("%sさんも%sさんも同じ体格です\n", member1->name, member2->name);
	}
	
	free(member1);
	free(member2);
	
	return (0);
}

PROFILE *alloc_profile(void)
{
	PROFILE *member;
	
	member = (PROFILE *)malloc(sizeof(PROFILE));
	
	printf("名前=");
	scanf("%s", member->name);
	printf("身長(cm)=");
	scanf("%f", &(member->height));
	printf("体重(kg)=");
	scanf("%f", &(member->weight));
	
	return (member);
}

float bmi(PROFILE *member)
{
	float bmi_value;
	
	bmi_value = (member->weight) / ((member->height / 100) * (member->height / 100));
	
	return (bmi_value);
}