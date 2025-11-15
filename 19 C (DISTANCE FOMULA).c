//write a program to print distance travelled by an object?
#include <stdio.h>
int main()

{
	float u,a,t,d;
	printf("enter the value of u = ");
	scanf("%f",&u);
	printf("enter the value of a = ");
	scanf("%f",&a);
	printf("enter the value of t = ");
	scanf("%f",&t);
	d=(u*t)+(0.5*a*t*t);
	printf("distance travelled = %f",d);
	return 0;
}
