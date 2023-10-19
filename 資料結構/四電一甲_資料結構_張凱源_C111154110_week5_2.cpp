#include<stdio.h>
#include<stdlib.h>
int mypow(int x , int y ){
	if(y<1)
		return 1;
	else
		return x*mypow(x,y-1);
}

main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d的%d次方是%d \n",x,y,mypow(x,y));
}
