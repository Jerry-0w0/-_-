#include<stdio.h>
#include<stdlib.h>
#define MALLOC(p, s) \
    if (!((p) = malloc(s))) { \
        fprintf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE); \
    }


main(){

	int i ,*pi;	
	float f , *pf;
	//-------------------------------------------------------------------------------------
	
	MALLOC(pi,sizeof(int));
	MALLOC(pf,sizeof(float));

	//-------------------------------------------------------------------------------------
	
	//pi = (int*)malloc(sizeof(int));
	//pf = (float*)malloc(sizeof(float));
	
	//-------------------------------------------------------------------------------------
	
	/*if ((pi = (int*) malloc(sizeof(int)))==NULL || 
	    (pf = (float*) malloc(sizeof(float)))==NULL)
	{fprintf(stderr, "Insufficient memory");
	exit(EXIT_FAILURE);
	}*/
	
	//-------------------------------------------------------------------------------------
	
	*pi = 1024;
	*pf = 3.14;
	printf("an integer = %d, a float = %f %p %p" ,*pi ,*pf,pi,pf);
	pf = (float*)malloc(sizeof(float));
	free(pi);
	free(pf);
}

 
