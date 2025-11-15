 //bitwise operators//
#include <stdio.h>
int main()
{
	int a,b;
	unsigned int c=8;
	printf("input a value");
	scanf("%d",&a);
	printf("input b value");
	scanf("%d",&b);
	printf("'bitwise operators'\n");
	printf("a&b:%d\n",a&b);
	printf("a|b:%d\n",a|b);
	printf("a^b:%d\n",a^b);
	printf("~a:%d\n",~a);
	printf("~b:%d\n",~b);
	printf("a>>2:%d\n",a>>2);
	printf("b<<3:%d\n",b<<3);
	printf("~c:%d\n",~c);
    return 0;
}
