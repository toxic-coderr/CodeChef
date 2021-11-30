#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=n;k++)
        {
            cout<<' ';
        }
        for(j=1;j<=i;j++)
        {
            cout<<'*';
            
        }
        cout<<"\n";
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
