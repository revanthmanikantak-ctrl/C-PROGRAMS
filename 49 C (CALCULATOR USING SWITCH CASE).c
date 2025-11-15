//write a program to simulate a calculator using switch case//
#include <stdio.h>
int main()
{
	char op;
	double f,s;
	printf("enter an operator(+,-,*,/): ");
	scanf("%c",&op);
	printf("enter two operands : ");
	scanf("%lf %lf",&f,&s);
	switch(op)
	{
		case'+':
		printf("%.1lf+%.1lf=%.1lf",f,s,f+s);
		break;
		case'-':
		printf("%.1lf-%.1lf=%.1lf",f,s,f-s);
		break;
		case'*':
		printf("%.1lf*%.1lf=%.1lf",f,s,f*s);
		break;
		case'/':
		printf("%.1lf/%.1lf=%.1lf",f,s,f/s);
		break;
		default:
		printf("error! operator is not correct");
	}
	return 0;
}
