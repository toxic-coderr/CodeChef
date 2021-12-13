#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    if(p%a==0 && q%b==0 && (p/a==q/b || abs(p/a-q/b)==1))
    cout<<"yes"<<endl;
    else
    cout<<"No"<<endl;
}


int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
