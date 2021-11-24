#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,a,b;
    cin>>x>>y;
    a=x*1;
    b=y*2;
    if((a+b)%2==0 && (y%2==0 && x%2==0) || (y%2!=0 && x%2==0 && x>0))
    cout<<"YES\n";
    // if(x%2!=0 || y%2!=0 || x==0 && y==0)
    else
    cout<<"NO\n";
    
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
