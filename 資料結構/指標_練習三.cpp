#include<stdio.h>
#include<stdlib.h>

int strcomp(char*a,char*b){
	int i = 0;
	while(1){
		if (a[i] > b[i])
			return 1;
		else if(a[i] == b[i])
			i++;
		else
			return -1;
		if(a[i]== '\0' && b[i]=='\0')
			return 0;
		else if (a[i] == '\0')
			return -1;
		else 
			return 1;			
		
	}
} 
main(){
	char *a,*b,*c;
	a = (char*)malloc(80*sizeof(char));
	b = (char*)malloc(80*sizeof(char));
	printf("�п�J�r��a�]�̦h80�Ӧr���^�G");
    scanf("%s", a);

    printf("�п�J�r��b�]�̦h80�Ӧr���^�G");
    scanf("%s", b);
    
    if(strcomp(a,b)==1)
    	c=a;
    else
    	c=b;
    printf("%s",c);

}
