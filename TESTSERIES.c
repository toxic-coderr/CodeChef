

#include <stdio.h>

int main()
{
    int t,i,j,z=0,c,b,a[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    for(j=0;j<5;j++)
    {
    scanf("%d",&a[j]);
    }
    c=0;b=0;
    for(j=0;j<5;j++)
    {
    if(a[j]==1) c++;
    else if(a[j]==2) b++;
     // else if(a[j]==0)
    // z++;
    }
    // printf("c=%d,b=%d",c,b);
    if(c>b)
    printf("India\n");
    else if(c<b)
    printf("England\n");
    else if(c==b)
    printf("Draw\n");
    
    }
    
    

    return 0;
}
