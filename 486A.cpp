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
    cin>>n;int count1=0;int count2=0;
    if(n&1)
    {
        cout<<(-1-(n/2));
    }
    else
    {
        cout<<n/2<<endl;
    }
    
 
}