#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x1,x2,y1,y2,z1,z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    if(x2>=x1 && y2>=y1 && z2<=z1)
    cout<<"YES\n";
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
