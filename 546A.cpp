#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();

int32_t  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0; 
}
void solve()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum+=(i*k);
    }
    if(sum==n) {cout<<0<<endl;}
    else if(sum<n) {cout<<0<<endl;}
    else {cout<<sum-n<<endl;}
}