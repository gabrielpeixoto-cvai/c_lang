#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
	int mtrx[2][2]={{1,1},{1,1}};
	int mtrx2[2][2]={{2,2},{2,2}};
	int i, j, res[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			res[i][j]=mtrx[i][j]*mtrx2[i][j];
		}
	}
	
	printf("multiplication result :\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d]= %d\n", i, j, res[i][j]);
		}
	}
	

}
