#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a;
    cin>>n;
    a=n/4;
    if(n%4==0 && a%2==0)
    cout<<n/4<<"\n";
    else
    cout<<-1<<"\n";
    
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
