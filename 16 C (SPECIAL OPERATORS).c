//special operators//
#include <stdio.h>
int main()
{
	int a;
	printf("size of a = %d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(short int));
	printf("%d\n",sizeof(2));
	printf("address of a = %d\n",&a);
	printf("address of a = %p",&a);
	return 0;
}
