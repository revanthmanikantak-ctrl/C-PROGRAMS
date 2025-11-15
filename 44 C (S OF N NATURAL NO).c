//write a program to print sum of first n natural numbers//
#include <stdio.h>
int main(){
	int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+i;
	}
	printf("%d",s);
	return 0;
}
