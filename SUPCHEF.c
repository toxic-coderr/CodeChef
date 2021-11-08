

#include <stdio.h>

int main()
{
    int t,i,m,n,k,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&m,&n,&k);
        c=n*k;
        if(m>c)
        printf("YES\n");
        else
        printf("No\n");
    }

    return 0;
}
