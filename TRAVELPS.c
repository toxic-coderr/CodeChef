

#include <stdio.h>

int main()
{
    int a,i,A,B,j,N;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int x=0,y=0;
        scanf("%d%d%d",&N,&A,&B);
        char s[N];
        scanf("%s",s);
        for(j=0;j<N;j++)
        {
            if(s[j]=='0')
            x++;
            if(s[j]=='1')
            y++;
        }
       
        int sum=(A*x)+(y*B);
        printf("%d\n",sum);
    }
        
        

    return 0;
}
