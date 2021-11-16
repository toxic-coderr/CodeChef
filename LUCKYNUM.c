
#include <stdio.h>

int main()
{
    int i,a,b,c,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==7 || b==7 || c==7)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
