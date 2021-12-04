#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,n,c,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        // int count=0;
        // c=n%i;
        if(n%i==0)
        {
            count++;
            // cout<<i<<" ";
            
        }
    }
        cout<<count<<endl;
        // cout<<c;
        for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            // count++;
            cout<<i<<" ";
            
        }
        // cout<<c;
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
