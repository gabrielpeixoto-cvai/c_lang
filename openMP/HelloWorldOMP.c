#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	omp_set_num_threads(4);

	#pragma omp parallel
	{
		int tid = omp_get_thread_num();
		printf("Hello World from Thread%d\n", tid);
	}
}
