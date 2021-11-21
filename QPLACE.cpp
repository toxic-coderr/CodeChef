#include<bits/stdc++.h>
using namespace std;
void solve()
{
    
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j &&(i<=n-4))
            arr[i][j]='Q';
            else
             arr[i][j]='.';
        }
    }
    arr[n-2][n-2]='Q';
    
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }cout<<"\n";
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}