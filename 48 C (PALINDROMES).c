//write a program to check the given number is palindrome or not//
#include <stdio.h>
int main()
{	int n,t,r,rev=0;
	scanf("%d",&n);
	t=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	n=t;
	if(n==rev)
	printf("palindrome number");
	else 
	printf("not palindrome number");
	return 0;
}
