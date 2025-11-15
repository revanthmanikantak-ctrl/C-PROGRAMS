//write a program to check the given number is prime or not by using while loop//
#include <stdio.h>
int main()
{
	int n,x=2,f=1;
	printf("enter the value of n = ");
	scanf("%d",&n);
	while(x<n)
	{
		if(n%x==0)
		{
			f = 0 ;
		}
		x++;
	}
	if(f)
	{
		printf("%d is prime",n);
	}
	else{
		printf("%d is not a prime",n);
	}
	return 0;
}
