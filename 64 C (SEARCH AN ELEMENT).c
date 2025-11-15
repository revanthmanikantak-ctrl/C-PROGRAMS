//write a program to search an element in the given array//
#include <stdio.h>
int main(){
	int a[20],i,k,n,p,f=0;
	printf("enter n ");
	scanf("%d",&n);
	printf("enter array : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
		printf("\n enter element to search : ");
		scanf("%d",&k);
		for(i=0;i<n;i++){
			if(k==a[i]){f=1;
			p=i+1;}}
		    if(f==1)
		    printf("element found at p %d",p);
		    else
		    printf("element not found");
		    return 0;
}
