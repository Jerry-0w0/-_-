#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct  point{
	float x,y;
};
typedef struct point PT;

float distance(PT P1,PT P2){
	float dx = P1.x -P2.x ;
	float dy = P1.y -P2.y ;
	return sqrt(dx*dx+dy*dy);
	
}



main(){
	float ab,ac,bc;
	PT A,B,C;
	printf("��JA�y��:"); 
	scanf("%f %f",&A.x,&A.y);
	printf("��JB�y��:"); 
	scanf("%f %f",&B.x,&B.y);
	printf("��JC�y��:"); 
	scanf("%f %f",&C.x,&C.y);
	printf("\n "); 
	ab = distance(A,B);
	ac = distance(A,C);
	bc = distance(B,C);
	printf("AB = %f AC = %f BC = %f \n",ab,ac,bc);
}

