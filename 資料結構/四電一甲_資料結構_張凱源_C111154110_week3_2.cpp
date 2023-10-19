#include<stdio.h>
#include<stdlib.h>
main()
{
	float* a;
	int n;
	scanf("%d",&n);
	a = (float*) malloc(sizeof(float)*n);
	for(int i=0;i<n;i++)
		scanf("%f",&a[i]);
	printf("a = ");
	for(int i=0;i<n;i++)
		printf("%f ",a[i]);
}
