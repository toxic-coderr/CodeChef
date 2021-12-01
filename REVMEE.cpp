#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a[100000],i,b[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
     for(i=0;i<n;i++)
     {
       cout<<b[i]<<" ";
     }
}


int main() 
{
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
	    solve();
// 	}
	return 0;
}
