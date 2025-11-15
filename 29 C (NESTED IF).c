//write a program to print the given value is positive,negative or zero//
#include <stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a>0){
		printf("%d is positive \n",a);
	}
	else
	{
		if(a<0){
		printf("%d is negative \n",a);
	    }
    	else
	{
	printf("%d is zero",a);}
}
	return 0;
}
