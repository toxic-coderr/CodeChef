#include<stdio.h>
#include<math.h>
int main()
{
	int t,T;
	
	scanf("%d",&T);
	for(t=0;t<T;t++)
	{
		int k;
		scanf("%d",&k);
		float x=sqrt(2*(float)k);
		int y=floor(x)-1;
		while((y*(y+1)/2)<k)
		{
			y++;
		}
		printf("%d\n",2*y);
	}
}