//write a program to print the square root of a value?
#include <stdio.h>
#include <math.h>
int main ()
{
	int a;
	float b;
	printf("enter the value of a = ");
	scanf("%d",&a); 
    b = sqrt(a);
	printf("square root of a = %f",b);
	return 0;
}
