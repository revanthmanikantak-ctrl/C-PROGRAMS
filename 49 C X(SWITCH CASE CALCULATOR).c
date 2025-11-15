//write a program to simulate a calculator using switch case//
#include <stdio.h>
int main()
{
	char op;
	double f,s,c;
	printf("enter an operator(+,-,*,/): ");
	scanf("%c",&op);
	printf("enter two operands : ");
	scanf("%lf %lf",&f,&s);
	switch(op)
	{
		case'+':
	    c=f+s;
		break;
		case'-':
		c=f-s;
		break;
		case'*':
		c=f*s;
		break;
		case'/':
		c=f/s;
		break;
		default:
		printf("error! operator is not correct");
	}
	printf("% .2lf",c);
	return 0;
}
