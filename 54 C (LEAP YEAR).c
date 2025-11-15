//write a program to find the given year is a leap year or not,year should be yyyy//
#include <stdio.h>
int main(){
	int y;
    scanf("%d",&y);
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
    printf("leap year");
    else
    	printf("not leap year");
	return 0;
}
