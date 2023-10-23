#include<stdio.h>
#include<stdlib.h>
#define MAX_DEGREE 101
typedef struct {
	int degree;
	float coef[MAX_DEGREE];
}poly;
poly attach(poly A,float coef,int expon){
	int temp = A.coef[expon];
	if(temp != 0) {
	    printf("wrong \n");
		exit(0);
	} 
	else if(A.degree < expon) {
    	A.coef[expon] = coef;
		A.degree = expon;
    	return A;
	} 
	else {
    	A.coef[expon] = coef;
    	return A;
	}

}
int main(){
	int i,temp1;
	float temp2;
	poly A,B;
	printf("請輸入最高次方: ");
	scanf("%d",&A.degree);
	for(i = 0 ; i < A.degree+1 ; i++){
		printf("請輸入x^%d的係數: ",i);
		scanf("%f",&A.coef[i]);
	}
		
	printf("最高次方是 %d ",A.degree);
	printf("\n");
	for(i = A.degree ; i >= 0; i--){
		if(i == 0)
			printf("(%.2f)x^%d ",A.coef[0],0);
		else
			printf("(%.2f)x^%d + ",A.coef[i],i);
	}
		
	printf("\n請輸入要插入的次方 x^");
	scanf("%d",&temp1);
	printf("\n請輸入要插入的係數x = ");
	scanf("%f",&temp2);
	B = attach(A , temp2 , temp1);
	printf("最高次方是 %d ",B.degree);
	printf("\n");
	for(i = B.degree; i >= 0; i--) {
		if(i == 0)
			printf("(%.2f)x^%d ",B.coef[0],0);
		else
			printf("(%.2f)x^%d + ",B.coef[i],i);
	}

}

	
