
#include <stdio.h>

int main()
{
    int t,n,a,i;
    int l=1;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d%d",&n,&a);
       for(int j=1;(j*j)<=n;j++)
       {
           l=j;
       }
       
        printf("%d\n",l*a);
        l=1;
   }

    return 0;
}

