#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[4];
	int n=1,ans;
	for(int i = 0; i<4 ;i++){
		scanf("%d",&a[i]);
		ans += a[i]*n;
		n = 2*n;	
		
	}
		printf("%d",ans);
	
} 
