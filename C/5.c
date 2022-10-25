#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int GCD;
	int LCM;
	int i;
	
	while (scanf("%d %d", &a, &b) != EOF){
		if (a > b){
			GCD = a % b;
			while (GCD != 0){
				a = b;
				b = GCD;
				GCD = a % b;
			}
			
			for (i = a; i < a * b; i++){
				if (i % a == 0 && i % b == 0){
					LCM = i;
					break;
				}
			}
		}
		else if(b > a){
			GCD = a % b;
			while (GCD != 0){
				b = a;
				a = GCD;
				GCD = b % a;
			}
			for (i = b; i < a * b; i++){
				if (i % a == 0 && i % b == 0){
					LCM = i;
					break;
				}
			}
		}
	}
	printf("%d %d\n", GCD, LCM);
	return (0);
}