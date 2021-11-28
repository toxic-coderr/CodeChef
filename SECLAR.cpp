#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c>a && c<b || c>b && c<a)
    cout<<c<<endl;
    else if(a>c && a<b || a>b && a<c)
    cout<<a<<endl;
    else if(b>c && b<a || b>a && b<c)
    cout<<b<<endl;
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
