#include<stdio.h>
int main(void)
{
    int h, t, s;
	
	t = 10;
	h = 5;
	s = t * h / 2;
	
	
	printf("底辺が%dcmで高さが%dcmの三角形の面積は%d平方cmです\n", t, h, s);
	
	return(0); 
}