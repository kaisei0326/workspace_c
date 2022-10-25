#include <stdio.h>

int main(void)
{
	int a, b;
	int t1 = 0, t2;
	int n, x, snow;
	
	scanf("%d %d", &a, &b);
	
	for (n = 1; n <= 999; n++){
		t1 += n;
		t2 = t1 + n + 1;
		
		for (x = 1; x <= 499500; x++){
			if (a + x == t1 && b + x == t2){
				snow = x;
			}
		}
	}
	
	printf ("%d\n", snow);
	
	return (0);
}