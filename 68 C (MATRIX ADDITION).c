//write a program for matrix addition//
#include <stdio.h>
int main(){
	int a[10][10],b[10][10],i,j,c[10][10];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);}}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);}}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];}}
		printf("result matrix \n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d\t",c[i][j]);}
		printf("\n");}
		return 0;				
}
