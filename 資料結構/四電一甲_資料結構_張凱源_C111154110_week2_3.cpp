#include<stdio.h>


int main(){
	int a[3][3]={{-8,23,-12},{23,-4,35},{-9,54,38}};
		
	int i,j,avg,temp;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			temp += a[i][j];
	avg=temp/9;		
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			if (a[i][j]>=avg)
				a[i][j]=1;
			else
				a[i][j]=0;
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
				
}
