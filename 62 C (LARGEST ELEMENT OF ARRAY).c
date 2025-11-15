//write a program to print largest element of array//
#include <stdio.h>
#include <math.h>
int main()
{
	int i,b[5],large=0;
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	for(i=0;i<5;i++)
	if(large<b[i])
	large = b[i];
	printf("large = %d",large);
	return 0;
}
