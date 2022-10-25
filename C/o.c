#include<stdio.h>

int main(void)
{
  
  int base;
 
 
  int exponent, i;
 
  int answer = 1; 
 

  base = 11;
 
  scanf("%d", &exponent);
  i = exponent - 1;
 

  while(i!=0){
    answer = answer * base;
    --i;
  }
 
  printf("%d\n", answer);
 
  return (0);
}