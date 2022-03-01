#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,l,x,a,b,c;
    cin>>n>>l>>x;
    a=n-l;
    if(a<=l)
    {
        b=a*x;
        cout<<b<<"\n";
    }
    else if(l<a)
    {
    c=l*x;
    cout<<c<<"\n";
    }
    
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
