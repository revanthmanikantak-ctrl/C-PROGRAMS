//write a program to generate electricity bill//
#include <stdio.h>
int main()
{
	int u;
	float c,a,ta;
	printf("enter total units consumed : ");
	scanf("%d",&u);
	if(u<=50){
	a=u*2.50;
	c=30;}
	else if(u<=100){
	a=u*3.00;
	c=50;}
	else if(u<=200){
	a=u*3.50;
	c=75;}
	else if(u<=300){
	a=u*4.00;
	c=100;}
    else{
	a=u*5.00;
	c=125;}
	ta=a+c;
	printf("electricity bill : %.2f",ta);
	return 0;
}
