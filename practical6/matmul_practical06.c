#include <stdio.h>

//Declaring the matrix multiplication funciton
void matmul(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);


//Computing matrix multiplication of A and B
void matmul(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){

	//Declaring variables
	int i, j, k;
	//matrix multiplication
	for(i=0;i<n;i++){
		for(j=0;j<q;j++){
			for(k=0;k<p;k++)
				C[i][j] += A[i][k]*B[k][j];

		}

	}
}
	