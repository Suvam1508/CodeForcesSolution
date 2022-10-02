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
 
    
    long long int n,h;
    cin>>n>>h;int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x<=h) sum+=1;
        else sum+=2;
    }
    cout<<sum<<endl;
 
}