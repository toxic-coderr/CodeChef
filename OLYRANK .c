#include <stdio.h>

int main()
{
   int a,b,c,d,e,f,g,i;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       scanf("%d%d%d%d%d%d",&b,&c,&d,&e,&f,&g);
       if((b+c+d)>(e+f+g))
       printf("1\n");
       else
       printf("2\n");
   }

    return 0;
}
