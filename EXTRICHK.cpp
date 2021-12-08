#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    // if(a+b!=c || b+c!=a || c+a!=b)
    // cout<<'-1\n';
    if((a==b && b==c) && ((a+b)>c && (b+c)>a && (c+a)>b))
    cout<<1<<"\n";
    else if((a==b || b==c || c==a) && ((a+b)>c && (b+c)>a && (c+a)>b))
    cout<<2<<"\n";
    else if((a!=b && b!=c && c!=a) && ((a+b)>c && (b+c)>a && (c+a)>b))
    cout<<3<<"\n";
    else
    cout<<-1<<"\n";
    
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
