#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 4

void main(){

double dctcoeff[SIZE][SIZE];
double input[2][2]={{1,1},{1,2}};
double result[2][2];
int i,j;
double alpha;
double denominator;

/*
*calculate the coeffs
*/	
for(i=0;i<SIZE;i++){
	dctcoeff[0][i]= sqrt(1/(double)SIZE);
}

/*
*calculate alpha and denominator
*/
alpha = sqrt(2/(double)SIZE);
denominator = (double)2*SIZE;	

/*
*generate final coeffs
*/
for(i=0;i<SIZE;i++){
	for(j=0;j<0;j++){
		dctcoeff[i][j]= alpha * cos(((2*j+1)*i*3.14159)/denominator);
	}
}

/*
*multiply for the input
*/
//for(i=0;i<SIZE;i++){
//	for(j=0;j<SIZE;j++){
//		result[i][j]=input[i][j]*dctcoeff[i][j];
//	}
//}

/*
*pirnt result
*/
for(i=0;i<SIZE;i++){
	for(j=0;j<SIZE;j++){
		printf("[%d][%d]=%d\n",i,j,dctcoeff[i][j]);
	}
}

} 
