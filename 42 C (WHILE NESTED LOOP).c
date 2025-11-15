//write a program for introduction while nested loop//
#include <stdio.h>
int main()
{
	int i,j;
	i=0;j=0;
	while(++i<=5)
	{
		while(++j<=5){
		printf("%d %d\n",i,j);
	}
	    printf("%d %d\n",i,j);
	}
	return 0;
 } 
