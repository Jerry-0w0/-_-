#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      float a[10]={8,10,6,7,2,0,3,21,45,37},sum=0,a1,b1,c1;
      int i;
      for(i=0;i<10;i++)
        sum+=a[i];
      a1=sum/10;
      for(i=0;i<10;i++)
        b1+=(a[i]-a1)*(a[i]-a1);
      c1=sqrt(b1/10);
      printf("¥­§¡­È:%f  ¼Ð·Ç®t:%f",a1,c1);
      }
      

