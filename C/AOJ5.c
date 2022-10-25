#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	float x, y;
	
	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
		for(x = -1000; x < 1000; x++){
			for(y = -1000; y < 1000; y++){
				if((a * x) + (b * y) == c && (d * x) + (e * y) == f){
					printf("%.3f %.3f\n", x, y);
				}
			}
		}
	}
	
	return (0);
}