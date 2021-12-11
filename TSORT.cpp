
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int t,d,i,n,j,a[1000000],b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        
        scanf("%d",&a[i]);
    }
    std::sort(a,a+t);
    // for(i=0;i<t-1;i++)
    // {
    //     for(j=i+1;j<t;j++)
    //     {
    //          if (a[i] > a[j]) 
    //             {
 
    //                 b =  a[i];
    //               a[i] =a[j];
    //                 a[j] = b;
 
    //             }
    //     }
    
    // }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
