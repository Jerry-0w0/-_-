#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct  point{
	float x,y,d;
};
typedef struct point PT;

float distance(PT P1,PT P2){
	float dx = P1.x -P2.x ;
	float dy = P1.y -P2.y ;
	return sqrt(dx*dx+dy*dy);
	
}
main(){
	PT a[5],O,F;
	O.x = 0;
    O.y = 0;
    O.d = 0;
	F = O;
	for(int i=0;i<5;i++){
		printf("¿é¤Ja[%d]®y¼Ð:",i); 
		scanf("%f %f",a[i].x,a[i].y);
		a[i].d = distance(a[i],O); 
		if(F.d<a[i].d){
			F = a[i];
		}
	}	
	printf("\n "); 
	printf(" F(%f,%f) d = %f \n",F.x ,F.y ,F.d );
}

