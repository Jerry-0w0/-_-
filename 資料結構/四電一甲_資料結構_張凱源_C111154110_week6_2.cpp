#include<stdio.h>
#include<stdlib.h>

struct complex{
	float r , v ;
};

typedef struct complex CP;

CP addCP(CP A,CP B ){
	CP C;
	C.r = A.r + B.r;
	C.v = B.v + A.v;
	return C;
}

CP mulCP(CP A,CP B ){
	CP C;
	C.r = A.r*B.r - A.v*B.v;
	C.v = A.r*B.v + A.v*B.r;
	return C;
}

main(){
	CP A,B,C;
	CP S[3];
	CP SUM = {0,0};
	scanf("%f%f" , &A.r,&A.v);
	scanf("%f%f" , &B.r,&B.v);
	C = mulCP( A , B );
	printf("%f %f ",C.r,C.v);
	for(int i=0;i<3;i++){
		scanf("%f%f" , &S[i].r , &S[i].v);
		SUM = addCP(S[i] , SUM);
	}
	printf("%f %f ",SUM.r,SUM.v);
		
}
