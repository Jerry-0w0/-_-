#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float avg(float *a, int n){
	float sum = 0.0;
	for(int i=0;i<n;i++)
		sum += a[i];
	return sum/n;
}

float sd(float *a,float m, int n){
	float temp = 0.0;
	for(int i=0;i<n;i++)
        temp+=(a[i]-m)*(a[i]-m);
    return sqrt(temp/n);
}


main(){
    float m;
    float a[6]={12, 35, 24, -6, 19, -10};
    printf("avg=%f\n", m=avg(a, 6));
    printf("sd=%f\n", sd(a, m, 6)); 
}
      
