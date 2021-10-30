#include <stdio.h>

int main()
{
    int a,A,B,C,D,E,F,i,sum=0,count=0;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       scanf("%d%d%d ",&A,&B,&C);
       scanf("%d%d%d ",&D,&E,&F);
       sum=A+B+C;
       count=D+E+F;
       if(sum==count)
       {
       printf("Pass\n");
       }
       else
       {
       printf("Fail\n");
       }
   }

    return 0;
}
