
#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int t,i,n,w,q,a,z;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&n);
    q=log(n)/log(2);
    w=pow(2,q);
    a=w/2;
    z=n-w+1;
    if(a>z)
    printf("%d\n",a);
    else
    printf("%d\n",z);
    }

    return 0;
}
