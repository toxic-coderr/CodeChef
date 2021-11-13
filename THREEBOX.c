
#include<stdio.h>
int main()
{
    int a,b,t,c,d,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
     
        if((a+b+c)<=d)
       printf("1\n");
         else if((a+b)<=d || (a+c)<=d || (b+c)<=d &&(a+b+c)>d)
       printf("2\n");
     
       else if((a+b)!=d || (a+c)!=d || (b+c)!=d &&(a+b+c)>d)
       printf("3\n");
    }

    return 0;
}
