//WRITE A PROGRAM1 TO PRINT THAT THE GIVEN NUMBER IS ARMSTRONG OR NOT//
#include<stdio.h>
int main()
{
	int n,t,r,s=0;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	printf("%d",s);
	n=t;
	if(n==s)
	{
		printf("ARMSTRONG NUMBER");
	}
	else
	{
		printf("NOT ARMSTRONG NUMBER");
	}
	return 0;
}

