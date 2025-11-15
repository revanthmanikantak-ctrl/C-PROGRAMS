//write a program to print largest of three numbers//
#include <stdio.h>
int main()
{
	int a  ;
	printf("enter a value");
	scanf("%d",&a);
	int b  ;
	printf("enter b value");
	scanf("%d",&b);
	int c  ;
	printf("enter c value");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d is largest",a);
		}
		if(b>c){
			if(b>a){
				printf("%d is largest",b);
			}
		}
		else{
			printf("%d is largest",c);
		}
	}
	return 0;
}
