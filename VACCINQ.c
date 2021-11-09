

#include <stdio.h>

int main()
{
    int t,i,n,p,x,y,a[100],child=0,adult=0,w=0,k,j,tm=0;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d%d%d%d",&n,&p,&x,&y);
        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(j=0; j<n; j++){
            if(a[j]==0) tm+=x;
            else if(a[j]==1) tm+=y;
            if(j+1==p)break;
        }
        w=adult*y+child*x;
        printf("%d\n",tm);
        tm=0;
    }
    return 0;
}
