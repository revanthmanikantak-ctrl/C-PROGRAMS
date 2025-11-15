//write a program to print the values of area of circle,square,rectangle and triangle?
#include <stdio.h>
#include <math.h>
int main()
{
	int r,a,l,b,B,h,C,S,R,T;
	printf("enter radius r = ");
	scanf("%d",&r);
	printf("enter area a = ");
	scanf("%d",&a);
	printf("enter length l = ");
	scanf("%d",&l);
	printf("enter breadth b = ");
	scanf("%d",&b);
	printf("enter Base B = ");
	scanf("%d",&B);
	printf("enter height h = ");
	scanf("%d",&h);
    C = (3.14*r*r);
    S = (a*a);
    R = (l*b);
    T = (0.5*B*h);
	printf("the area of circle C = %d\n",C);
	printf("the area of square S = %d\n",S);
	printf("the area of rectangle R = %d\n",R);
	printf("the area of triangle T = %d",T);
	return 0;
 } 
