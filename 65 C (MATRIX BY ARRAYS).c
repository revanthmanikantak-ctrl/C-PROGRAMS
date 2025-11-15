//write a program to read 2 dimensional array to print matrix//
#include <stdio.h>
int main()
{
	int i,j,a[10][10],b[10][10];
	printf("Enter the element into Matrix A");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);}}
	printf("Elements of matrix A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",a[i][j]);
		}printf("\n");}
	return 0;
}
