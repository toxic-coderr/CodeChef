

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,t,x,y,k;
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {
        scanf("%d%d",&x,&y);
        x=abs(x);
        y=abs(y);
        if(abs(x-y)%2==0)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
