#include <stdio.h>

int min(int x, int y);
int max(int x, int y);

int main(void)
{
	int seisuu[100];
	int i;
	int n;
	int saidai;
	int saisyou;
	
	printf("®”‚Ì”=");
	scanf("%d", &n);
	
	for(i = 0;i < n;i++){
		printf("®”=");
		scanf("%d", &seisuu[i]);
	}
	
	saidai = max(saidai, seisuu[1]);
	saisyou = min(saisyou, seisuu[1]);
	
	for(i = 2;i < n;i++){
		saidai = max(seisuu[0], seisuu[i]);
		saisyou = min(seisuu[0], seisuu[i]);
	}
	
	printf("Å‘å’l=%d\n", saidai);
	printf("Å¬’l=%d\n", saisyou);
	
	return (0);
}

int max(int x, int y)
{
	if(x > y){
		return(x);
	}
	return(y);
}

int min(int x, int y)
{
	if(x < y){
		return(x);
	}
	return(y);
}