/*write a program to print values for assignment operators*/
#include <stdio.h>
int main()
{
	int a ;
	printf(" initial value of a = ");
	scanf("%d",&a);
	printf("after performing a+=5:%d\n",a+=5);             //a=a+5
	printf("after performing a-=6:%d\n",a-=6);             //a=a-6
	printf("after performing a*=7:%d\n",a*=7);             //a=a*7
	printf("after performing a/=8:%d\n",a/=8);             //a=a/8
	printf("after performing a%=9:%d\n",a%=9);             //a=a%9
	return 0;
}
