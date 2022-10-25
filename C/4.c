#include <stdio.h>

int main(void)
{
	int N;
	int a[1000], b[1000], c[1000];
	int n;
	
	scanf("%d", &N);
		n = N;
		while(n != 0){
			scanf("%d %d %d", &a[n], &b[n], &c[n]);
			n--;
		}
		while(N != 0){
			if((a[N] * a[N]) + (b[N] * b[N]) == (c[N] * c[N])){
				printf("YES\n");
			}
			else if((a[N] * a[N]) + (c[N] * c[N]) == (b[N] * b[N])){
				printf("YES\n");
			}
			else if((c[N] * c[N]) + (b[N] * b[N]) == (a[N] * a[N])){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
			N--;
	}
	return(0);
}