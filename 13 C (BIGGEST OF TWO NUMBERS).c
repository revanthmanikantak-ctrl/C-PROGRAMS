/*write a program to print biggest of two numbers*/           
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a value = ");
	scanf("%d",&a);
	printf("enter b value = ");
	scanf("%d",&b);
	printf("biggest number is %d\n",a>b?a:b);
	return 0;
}
