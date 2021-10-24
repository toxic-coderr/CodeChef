#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d%d%d%d%d%d%d%d%d",&b,&c,&d,&e,&f,&g,&h,&j,&k,&l);
        if((b+d+f+h+k)>(c+e+g+j+l))
        printf("1\n");
        else if((b+d+f+h+k)<(c+e+g+j+l))
        printf("2\n");
        else
        printf("0\n");
    }

    return 0;
}
