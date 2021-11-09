

#include <stdio.h>

int main()
{
    int i,t,x=0,y=0,z=0,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        c=x+(z*2);
        if(c>=y)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
