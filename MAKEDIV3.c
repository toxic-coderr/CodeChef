
#include <stdio.h>

int main()
{
    int t,i;
    
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int j,n;
        
        scanf("%d",&n);
        if(n==1)printf("3\n");
        else
        {
        printf("1");
         for(j=0;j<n-2;j++)
            {
            printf("0");
            
            }
            printf("5\n");
        }   
    }
   
    return 0;
}
