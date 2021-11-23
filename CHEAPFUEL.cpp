#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,a,b,k,c=0,d=0,i;
    cin>>x>>y>>a>>b>>k;
    for(i=1;i<=k;i++)
    {
        x+=a;
        y+=b;
    
    }
        if(x>y)
        cout<<"DIESEL\n";
        // cout<<c<<"\n";
        else if(y>x)
        cout<<"PETROL\n";
        // cout<<d<<"\n";
        else if(x==y)
        cout<<"SAME PRICE\n";
        // cout<<c<<d<<"\n";
        // c=0;
        // d=0;
    
}


int main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
