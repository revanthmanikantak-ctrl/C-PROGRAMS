//write a program to print the value of the expression a/b*c-b+a*d/3 ?
#include <stdio.h>
int main()
{
	float a,b,c,d;
	printf("enter the value of a = ");
	scanf("%f",&a);
	printf("enter the value of b = ");
	scanf("%f",&b);
	printf("enter the value of c = ");
	scanf("%f",&c);
	printf("enter the value of d = ");
	scanf("%f",&d);
    printf("a/b*c-b+a*d/3 = %f",a/b*c-b+a*d/3);
    return 0;
}
	
