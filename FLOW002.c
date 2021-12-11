
#include <stdio.h>

int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        c=a%b;
 printf("%d\n",c);
    }
    return 0;
}
