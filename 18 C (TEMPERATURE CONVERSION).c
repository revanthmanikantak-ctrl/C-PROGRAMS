//write a program to convert celsius to farenheit and viceversa?
#include <stdio.h>
int main()
{
	float c,f;
	printf("temperature in celsius : ");
	scanf("%f",&c);
	f=(c*9/5.0)+32;
    printf("temperature in farenheit:%f\n",f);
    printf("temperature in farenheit : ");
	scanf("%f",&f);
	c=(f-32)*5/9.0;
    printf("temperature in celsius :%f",c);
    return 0;
} 
 
 
