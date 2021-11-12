
#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>0 && b>0)
        printf("Solution\n");
        else if(a==0 && b>0)
        printf("Liquid\n");
        else
        printf("Solid\n");
    }

    return 0;
}
