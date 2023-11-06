#include <stdio.h>
#include <stdlib.h>
#define MAX_DEGREE 100
#define TRUE 1
#define FALSE 0

typedef struct {
	int degree;
	float coef[MAX_DEGREE];
}poly;

//-------------------------------------------------------
poly Zero(){
	poly A;
	A.degree = 0;
	for(int i = 0;i < MAX_DEGREE;i++)
		A.coef[i] = 0;
	return A;
}
//-------------------------------------------------------
int IsZero(poly A){
	if(A.degree == 0 && A.coef[0]== 0)
		return 1;
	else
		return 0;
}
//-------------------------------------------------------
float Coef(poly A,int exp){
	return A.coef[exp];
}
//-------------------------------------------------------
int LeadExp(poly A){
	return A.degree;
} 
//-------------------------------------------------------
printPOLY(poly A){
	for(int i = A.degree ; i >= 0; i--)
		printf("%.1f  ",A.coef[i]);
	printf("\n");
}
//-------------------------------------------------------
poly Attach(poly A,float coef,int exp){
	if(A.coef[exp]==0){
		A.coef[exp]=coef;
		if(A.degree < exp)
			A.degree = exp;
	}
	return A;
}
//-------------------------------------------------------
poly Remove(poly A,int e){
	A.coef[e] = 0;
	if(A.degree == e)
		for(;A.coef[A.degree] == 0 && A.degree > 0;A.degree--){}
	return A;
}
//-------------------------------------------------------
poly SingleMult(poly A,float coef,int exp){
	poly C = Zero();
	if(coef == 0)
		return C;
	else
	for(int i=A.degree ; i>=0 ; i--){
		C.coef[i + exp] = A.coef[i]*coef;
	C.degree = A.degree + exp;
	}
	return C;
}
//-------------------------------------------------------
poly ADD(poly A,poly B){
	poly C=Zero();
	if(A.degree < B.degree )
		C.degree = B.degree ;
	else
		C.degree = A.degree ;
	for(int i = 0; i <= C.degree ;i++)
			C.coef[i] = A.coef[i] + B.coef[i];

	for(;C.coef[C.degree] == 0 && C.degree > 0;C.degree--){}
	return C;

}
//-------------------------------------------------------
poly Mult(poly A,poly B){
	poly C = Zero();
	while(IsZero(B) != 1){
		C = ADD(C,SingleMult(A,Coef(B,LeadExp(B)),LeadExp(B)));
		B = Remove(B , LeadExp(B));
	}
	return C;
}

 
main()
{
	poly A=Zero();
	A.degree=4;
	A.coef[4]=3;
	A.coef[1]=2;
	A.coef[0]=1;
	printPOLY(A);
	if(IsZero(A))
	   printf("A是零多項式\n");
	else
	   printf("A不是零多項式\n");
	printf("A是%d次多項式, 最高次係數為%d\n",LeadExp(A), Coef(A,LeadExp(A)));
	
	A=Attach(A, -6, 5);
	printPOLY(A);   //-6 3 0 0 2 1 
    A=Remove(A,1); 
    printPOLY(A);   // -6 3 0 0 0 1
	A=Remove(A,5);
    printPOLY(A);   // 3 0 0 0 1
	A=Remove(A,4);
	printPOLY(A);   // 1
    poly B=Zero();
    B.degree=1;
    B.coef[0]=1;
    B.coef[1]=2;
    A=ADD(A,B); //A=1 ,B=2x+1 
    printPOLY(A);// 2 2    (2x+2)
    A=SingleMult(A, 2, 2); //A* 2x^2 
    printPOLY(A);// 4 4 0 0
    A=Mult(A,B); // A* (2x+1)
    printPOLY(A); // 8 12 4 0 0
//	system("pause");
	
}
