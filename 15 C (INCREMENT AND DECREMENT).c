//write a program to print the results of increment and decrement operators?
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("initial value of a :");
	scanf("%d",&a);
	printf("after post increment\n:");
	printf("a:%d\n,b:%d\n",a,a++);
	printf("after pre increment\n:");
	printf("a:%d\n,c:%d\n",a,++a);
	printf("after post decrement\n:");
	printf("a:%d\n,d:%d\n",a,a--);
	printf("after pre decrement\n:");
	printf("a:%d\n,e:%d\n",a,--a);
	return 0; 
}
