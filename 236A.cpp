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
    string s;
    cin>>s;
    int count;set<char>p;
    
    for(int i=0;i<s.length();i++)
    {
        p.insert(s[i]);
    }
    count=p.size();
    if(count&1) {cout<<"IGNORE HIM!"<<"\n";}
    else {cout<<"CHAT WITH HER!"<<"\n";}
}