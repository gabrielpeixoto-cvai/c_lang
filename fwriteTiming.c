#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <fcntl.h>

void main(){
	//cria variaveis
	clock_t c0, c1;
	double diff, mili, micro, nano;
	
	//captura clock inicial
	c0=clock();
	
	//work start
	int fd, len;
	char a = 'a';
	char buf[56];

	if((fd = open("file",O_WRONLY))<0){
		exit(1);
	}

	len = snprintf(buf, sizeof(buf), "%c", a);

	write(fd, buf, len);
	
	close(fd);
	//work end
	
	//captura clock final
	c1=clock();
	
	//diferenca entre final e inicial
	diff = (double)(c1-c0);
	//tempo em milisegundos
	mili = (diff*1000)/CLOCKS_PER_SEC;
	//tempo em microsegundos
	micro = mili*1000;
	//tempo em nanosegundos
	nano = micro *1000;
	printf("c0=%d\n",c0);
	printf("c1=%d\n",c1);
	printf("elapsed time(seconds):%lf\n", mili/1000);
	printf("elapsed time(miliseconds)=%lf\n",mili);
	printf("elapsed time(microseconds)=%lf\n", micro);
	printf("elapsed time(nanoseconds)=%lf\n", nano);

}
