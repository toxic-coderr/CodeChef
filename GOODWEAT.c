
#include <stdio.h>

int main()
{
    int t,T,m,w,th,f,s,i,su,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d%d%d%d%d",&m,&t,&w,&th,&f,&s,&su);
        c=m+t+w+th+f+s+su;
        if(c>=4)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
