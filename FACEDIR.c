
#include <stdio.h>

int main()
{
    int a,d,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&d);
    
        if(d%4==0)
        printf("North\n");
        else if(d%4==2)
        printf("South\n");
        else if(d%4==3)
        printf("West\n");
        else
        printf("East\n");
        
        
    }

    return 0;
}
