#include <stdio.h>
#include <omp.h>

void main(){
	int i;
	omp_set_num_threads(2);
	
	#pragma omp parallel
	#pragma omp for
		for(i=0;i<40;i++) {printf("%d\n", i);}	

}
