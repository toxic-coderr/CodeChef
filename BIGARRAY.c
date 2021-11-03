
#include <stdio.h>

int main()
{
   long long int N,S,c,b;
 
   int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%ld%ld",&N,&S);
        b=N*(N+1)/2;
        c=b-S;
        if(c>=1 && c<=N)
        printf("%ld\n",c);
        else
        printf("-1\n");

        
    }

    return 0;
}
