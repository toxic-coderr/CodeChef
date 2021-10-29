
#include <stdio.h>

int main()
{
    int N,K,S;
    int i,a,x;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
   scanf("%d%d%d",&N,&K,&S);
   x=(S-(N*N)) /(K-1);
   printf("%d\n", x);
   }
   
   
    return 0;
}
