//write a program to print smallest element of array//
#include <stdio.h>
#include <math.h>
int main()
{
	int i,b[5],small=b[0];
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	for(i=0;i<5;i++)
	if(small>b[i])
	small = b[i];
	printf("small = %d",small);
	return 0;
}
