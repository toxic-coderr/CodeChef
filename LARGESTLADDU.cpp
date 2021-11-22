#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,max=0,min=0,i,j;
    cin>>n;
    int p=pow(2,n);
    int a[p];
    for(j=0;j<p;j++)
    {
        cin>>a[j];
    }
    
        max=a[0];
        min=a[0];
    for(i=0;i<p;i++)
    {
        // cin>>a[i];
        // if(n==0)
        // cout << 'NO' << std::endl;
        
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
        
        
    }
    if(max-min<=1)
    cout<<"yes\n";
    else
    cout<<"No\n";
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
