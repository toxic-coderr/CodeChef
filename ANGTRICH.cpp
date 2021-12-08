#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180 && a!=0 && b!=0 && c!=0 && (a+b>=c || b+c>=a || a+c>=b))
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
}


int main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
	    solve();
// 	}
	return 0;
}
