
#include <stdio.h>

int main()
{
    int t,n,i,a,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&x,&y);
        a=(n+1)*y;
        if(a>=x)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
