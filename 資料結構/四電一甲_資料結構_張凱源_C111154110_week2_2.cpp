#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[3][3]={{78,23,-12},{23,-4,35},{-92,54,38}} , 
		b[3][3]={{-16,34,-54},{6,82,77},{24,33,-7}} ,
		c[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			if (a[i][j]>=b[i][j])
				c[i][j]=a[i][j];
			else
				c[i][j]=b[i][j];
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
		printf("\n ");
	}
				
}
