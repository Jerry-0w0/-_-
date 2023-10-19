#include<stdio.h>
#include<stdlib.h> 
int main(){
	int a[5][5] = {{0,0,0,0,1},{0,1,1,0,0},{0,0,0,1,0},{0,1,0,0,0},{0,0,1,0,1}},
		b[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	int i,j,k,m,temp;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			temp=0;
			if (i==0 && j==0){
				for(k=0;k<2;k++){
						for(m=0;m<2;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}
			}
			else if (i==0 && j==4){
				for(k=0;k<2;k++){
						for(m=3;m<5;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}
			}
			else if (i==4 && j==0){
				for(k=3;k<5;k++){
					for(m=0;m<2;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}
						
			}
			else if (i==4 && j==4){
				for(k=3;k<5;k++){
					for(m=3;m<5;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}
						
			}
			else if (i>0 && i<4 && j==0){
				for(k=i-1;k<i+2;k++){
					for(m=0;m<2;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}			
			}
			else if (i==0 && j>0 && j<4){
				for(k=0;k<2;k++){
					for(m=j-1;m<j+2;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}			
			}
			else if (i==4 && j>0 && j<4){
				for(k=3;k<5;k++){
					for(m=j-1;m<j+2;m++)
							temp += a[k][m];
						b[i][j] = temp;
				}			
			}
			else if (i>0 && i<4 && j==4){
				for(k=i-1;k<i+2;k++){
					for(m=3;m<5;m++)
								temp += a[k][m];
							b[i][j] = temp;
				}
			}
			else
				for(k=i-1;k<i+2;k++){
					for(m=j-1;m<j+2;m++)
						temp += a[k][m];
					b[i][j] = temp;

				}

		}

	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}

	
		
} 
