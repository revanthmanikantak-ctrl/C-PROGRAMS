//write a program to print trace of a matrix//
#include <stdio.h>
int main(){
	int i,j,sum=0;
	int a[10][10];
	int trace = 0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("element [%d][%d] : ",i,j);
	        scanf("%d",&a[i][j]);
		}
    }
        for(i=0;i<3;i++){
        	trace += a[i][i];
		}
		printf("trace of matrix is : %d\n",trace);
    return 0;
}
