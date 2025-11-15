/*write a program to print results for logical operators*/
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	printf("a>=b&&a<b||a!=b:%d\n",a>=b&&a<b||a!=b);
	printf("a<=b||a>b:%d\n",a<=b||a>b);
	printf("a!=b&&a<=b:%d\n",a!=b&&a<=b);
	printf("a>=b||a<=b&&a!=b:%d\n",a>=b||a<=b&&a!=b);
	printf("!a<b:%d\n",!a<b);
	return 0;
	}
