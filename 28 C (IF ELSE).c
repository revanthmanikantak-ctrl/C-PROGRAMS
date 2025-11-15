//write a program to check whether the given number is even or odd//
#include <stdio.h>
int main()
{
	int a;
	printf("enter the value of a = ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("number %d is even\n",a);
	}
	else
	{
		printf("number %d is odd",a);
	}
	return 0;
}
