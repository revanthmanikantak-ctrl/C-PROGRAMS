//write a program to find sum of array elements//
#include <stdio.h>
int main()
{
	int i,b[5],s=0;
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	for(i=0;i<5;i++)
	s=s+b[i];
	printf("%d",s);
	return 0;
}
