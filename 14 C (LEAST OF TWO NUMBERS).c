/*write a program to print the least of three numbers*/
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter a value = ");
	scanf("%d",&a);
	printf("\n enter b value = ");
	scanf("%d",&b);
	printf("\n enter c value = ");
	scanf("%d",&c); 
	printf("least number = %d\n",(a<b)?((a<c)?a:c):((b<c)?b:c));
	return 0;
}
