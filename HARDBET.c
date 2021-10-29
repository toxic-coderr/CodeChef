#include <stdio.h>

int main()
{
    int a,A,B,C,i;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
   scanf("%d%d%d",&A,&B,&C);
   if(C<B && C<A)
   {
   printf("Alice\n");
   }
   else if(B<A && B<C)
   {
   printf("Bob\n");
   }
   else
   printf("Draw\n");
   }
    return 0;
}
