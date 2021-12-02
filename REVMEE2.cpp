#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a[100000],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mid=n/2;
    for(int i=0;i<mid;i++)
    {
        swap(a[i],a[n-i-1]);
    }
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
// 	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
