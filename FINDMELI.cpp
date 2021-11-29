#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,i,j,u=0,a[100000];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    // for(j=0;j<n;j++)
    // {
        if(k==a[i])
        // cout<<1<<endl;
        u++;
        // else
        // cout<<-1<<endl;
    }
    if(u!=0)
    cout<<1<<endl;
    else
    cout<<-1<<endl;
    
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
