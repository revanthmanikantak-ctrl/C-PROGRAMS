//write a program to print total in integer and average in float?
#include <stdio.h>
#include <math.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("enter marks of s1 = ");
	scanf("%d",&s1);
	printf("enter marks of s2 = ");
	scanf("%d",&s2);
	printf("enter marks of s3 = ");
	scanf("%d",&s3);
	printf("enter marks of s4 = ");
	scanf("%d",&s4);
	printf("enter marks of s5 = ");
	scanf("%d",&s5);
	total = s1+s2+s3+s4+s5;
	avg=total/5;
	printf("total = %d\n",total);
	printf("avg = %f",avg);
	return 0;
}
