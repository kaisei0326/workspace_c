#include<stdio.h>

int main(void)
{
	char str[22];
	int i;
	
	for (i = 0; i < 21; i++){
		switch (i % 3){
          case 0:
            str[i]='a';
            break;

          case 1:
            str[i]='b';
            break;

          case 2:
            str[i]='c';
            break;
        }
    }
    str[i] = '\0';

	printf("%s\n", str[);
	
	return(0);
}