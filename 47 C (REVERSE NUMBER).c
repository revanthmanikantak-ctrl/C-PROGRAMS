//write a program to print reverse number of given number//
#include <stdio.h>
int main()
{
	int n,t,r,rev=0;
	scanf("%d",&n);
	t=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	n=t;
	printf("%d",rev);
	return 0;
}
