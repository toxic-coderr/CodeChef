
#include <stdio.h>

int main()
{
    int t,i,n;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
     scanf("%d",&n);
     if(n>=1 && n<100)
     printf("Easy\n");
     else if(n>=100 && n<200)
      printf("Medium\n");
      else if(n>=200 && n<=300)
       printf("Hard\n");
 }

    return 0;
}
