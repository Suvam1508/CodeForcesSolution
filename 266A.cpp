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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    
    for(int i=0;i<s.length();i++)
    {
       if(s[i]==s[i+1])
       {
           count++;
       }
    }
    cout<<count<<endl;
}