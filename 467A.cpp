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
 
    
    long long int n;
    cin>>n;int cnt=0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if((q-p)>=2) {cnt++;}
    }
    cout<<cnt<<endl;
 
}