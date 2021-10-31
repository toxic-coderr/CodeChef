#include <stdio.h>

int main()
{
    int a,i,A,B,C,D,E;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
        if((A+B)<=D && C<=E)
        printf("Yes\n");
        else if((A+C)<=D && B<=E)
        printf("Yes\n");
        else if((B+C)<=D && A<=E)
        printf("Yes\n");
        else
        printf("No\n");
    }

    return 0;
}
