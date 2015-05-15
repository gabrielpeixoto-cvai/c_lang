#include <stdio.h>
#include <omp.h>

void main(){
	omp_set_num_threads(4);

	#pragma omp parallel
	#pragma omp sections
	{
		#pragma omp section
			printf("oi\n");
		#pragma omp section
			printf("olar\n");
		#pragma omp section
			printf("oie\n");
	
	}

	//implicitamente espera todas as threads acabarem pra sair do codigo

}
