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
 
    
    int cnt=0;
    string last="";
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        string cur;
        cin>>cur;
        if(cur!=last) cnt++;
 
        last=cur;
    }
    cout<<cnt<<endl;
    
 
}