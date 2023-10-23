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
	printf("�п�J�̰�����: ");
	scanf("%d",&A.degree);
	for(i = 0 ; i < A.degree+1 ; i++){
		printf("�п�Jx^%d���Y��: ",i);
		scanf("%f",&A.coef[i]);
	}
		
	printf("�̰�����O %d ",A.degree);
	printf("\n");
	for(i = A.degree ; i >= 0; i--){
		if(i == 0)
			printf("(%.2f)x^%d ",A.coef[0],0);
		else
			printf("(%.2f)x^%d + ",A.coef[i],i);
	}
		
	printf("\n�п�J�n���J������ x^");
	scanf("%d",&temp1);
	printf("\n�п�J�n���J���Y��x = ");
	scanf("%f",&temp2);
	B = attach(A , temp2 , temp1);
	printf("�̰�����O %d ",B.degree);
	printf("\n");
	for(i = B.degree; i >= 0; i--) {
		if(i == 0)
			printf("(%.2f)x^%d ",B.coef[0],0);
		else
			printf("(%.2f)x^%d + ",B.coef[i],i);
	}

}

	
