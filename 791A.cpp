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
    int a,b;
    cin>>a>>b;int count=0;
    while(a<=b)
    {
        count++;
        a=a*3;
        b=b*2;
    }
    cout<<count<<"\n";
}