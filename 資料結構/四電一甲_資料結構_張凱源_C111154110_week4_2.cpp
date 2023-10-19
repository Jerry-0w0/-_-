#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct  point{
	float x,y;
};
typedef struct point PT;


PT midPT(PT P1,PT P2){
	PT midpoint;
	midpoint.x = (P1.x + P2.x )/2;
	midpoint.y = (P1.y + P2.y )/2;
	return midpoint;
}

main(){
	float ab,ac,bc;
	PT A,B,C,mab,mbc,mac;
	printf("輸入A座標:"); 
	scanf("%f %f",&A.x,&A.y);
	printf("輸入B座標:"); 
	scanf("%f %f",&B.x,&B.y);
	printf("輸入C座標:"); 
	scanf("%f %f",&C.x,&C.y);
	printf("\n "); 
	mab = midPT(A,B);
	mbc = midPT(B,C);
	mac = midPT(A,C);
	printf("mab=(%f ,%f ) \n mbc=(%f ,%f ) \n mac=(%f ,%f )",mab.x,mab.y,mbc.x,mbc.y,mac.x,mac.y);
}

