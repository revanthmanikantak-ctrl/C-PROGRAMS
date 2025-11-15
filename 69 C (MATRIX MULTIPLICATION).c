//write a program for matrix multiplication//
#include <stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],i,j,k,sum;
	printf("enter elements into A matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);}}
			printf("enter elements into B matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);}}
			printf("matrix multiplication is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum=0;
		for(k=0;k<2;k++){
			sum=sum+a[i][k]*b[k][j];}
		c[i][j]=sum;}}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);}
		printf("\n");}
		return 0;		
}
