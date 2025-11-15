//write a program to check whether the given number is prime or not by usind for loop//
#include <stdio.h>
int main()
{
	int x,n,f=0,r;
	printf("enter the value of n=");
	scanf("%d",&n);
	r=n;
	for(x=1;x<=n;x++)
	{
		if(n%x==0)
	    f++; 
	}
	if(f==2)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is composite",n);
	}
     return 0;
}
