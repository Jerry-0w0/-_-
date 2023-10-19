#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct circle{
	float r,x,y;
};
typedef struct circle CL;

float distance(CL A ,CL B){
	float dx = A.x -B.x ;
	float dy = A.y -B.y ;
	return sqrt(dx*dx+dy*dy);
}

void relation(CL A,CL B){
	float D = distance(A,B);
	if(D > A.r+B.r)
		printf("�~�� \n");
	else if(D == A.r+B.r)
		printf("�~�� \n");
	else if(A.r+B.r > D && D > fabs(A.r-B.r))
		printf("�ۥ� \n");
	else if(D == fabs(A.r-B.r))
		printf("���� \n");
	else if(D < fabs(A.r-B.r))
		printf("���� \n");
}
main(){
	CL A,B,C;
	A.r = 3; A.x = 1; A.y = -2; 
	B.r = 5; B.x = 3; B.y = 4; 
	C.r = 2; C.x = -3; C.y = 1; 
	float AB = distance(A,B);
	float AC = distance(A,C);
	float BC = distance(B,C);
	printf("AB=%f , AC=%f ,BC=%f \n",AB,AC,BC);
	relation(A,B);
	relation(A,C);
	relation(B,C);
}
