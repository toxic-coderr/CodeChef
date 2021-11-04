
#include <stdio.h>

int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%4==0)
        printf("NO\n");
        else
        printf("YES\n");
        
        
    }

    return 0;
}
