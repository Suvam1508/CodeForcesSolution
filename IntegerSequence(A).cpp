#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// #define int long long int
void solve();


int32_t  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
   return 0; 
}

void solve()
{
    long long  n,b,x,y;
    cin>>n>>b>>x>>y;
    vector<long long >a(n+1);
    long long  sum=0;
    for(int i=1;i<=n;i++)
    {
        if((a[i-1]+x)<=b)
        {
            a[i]=a[i-1]+x;
        }
        else
        {
            a[i]=a[i-1]-y;
        }
        sum+=a[i];
    }
    cout<<sum<<endl; 
}