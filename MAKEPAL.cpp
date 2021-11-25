#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,d,count=0;
    // string s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    // if(n==1)
    // cout<<0<<"\n";
    for(int i=0;i<n;i++)
    {
    if(a[i]%2!=0)
    {
        count++;
    }
    }
        d=count/2;
    cout<<d<<"\n";
    
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
