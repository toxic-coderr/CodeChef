#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%5==0 && n%11==0)
    cout<<"BOTH"<<endl;
    else if(n%5!=0 && n%11!=0)
    cout<<"NONE"<<endl;
    else if(n%5==0 && n%11!=0 || n%5!=0 && n%11==0)
    cout<<"ONE"<<endl;
    
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
