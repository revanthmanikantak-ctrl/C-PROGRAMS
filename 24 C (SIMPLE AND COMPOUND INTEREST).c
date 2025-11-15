//write a program to print and calculate the simple interest and compound interest?
#include <stdio.h>
#include <math.h>
int main()
{ 
    float P,r,t;
	double si,ci;
	printf("enter the principle value (P) = ");
	scanf("%f",&P);
	printf("enter the annual rate value (r) = ");
	scanf("%f",&r);
	printf("enter the time value (t in years) = ");
	scanf("%f",&t);
    si = (P*r*t)/100.0;
    ci = P*((1+r/100.0),t)-P;
	printf("the value of si = %lf\n",si);
	printf("the value of ci = %lf\n",ci);
	return 0;
}

